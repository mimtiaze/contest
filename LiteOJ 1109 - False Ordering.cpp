#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>

using namespace std;

#define FOR(n)          for(int i=0; i<(int)(n); ++i)
#define FORI(i, s, n)   for(int i=(int)(s); i<(int)(n); ++i)
#define F0RIJ(i, a)     for(int i=0; i<(int)(a); i++)
#define FORP(x)         for(__typeof__((x).begin()) it=(x).begin(); it!=(x).end(); ++it)

#define all(V)          V.begin(),V.end()
#define FF              first
#define SS              second
#define sz(V)           ((int) (V).size())
#define pb              push_back
#define pii             pair<int, int>
#define ll              long long
#define ull             unsigned long long
#define mem(A)          memset(A, 0, sizeof(A))
#define lg              length()

#define all(V)          V.begin(),V.end()

#define input           freopen("input.txt", "r", stdin);
#define sync            {ios_base::sync_with_stdio(false);cin.tie(NULL);}

int numbers[1000+10];

int comp(int i,int j){
    if(numbers[i]==numbers[j]) return j<i;
    return numbers[i]<numbers[j];
}

int main()
{
    FORI(i,1,1000+1){
        int counter = 0;
        FORI(j,1,i)
        {
            if(i%j==0) counter++;
        }
        numbers[i]=counter;
    }

    int all[1010];
    FORI(i,0,1001) all[i]=i+1;

    sort(all,all+1001,comp);

    int t,test=1;
    cin >> t;
    while(t--){
        int temp;
        cin >> temp;
        cout << "Case "<< test++ << ": " << all[temp] << endl;
    }
//    FOR(1010)
//        cout << i << " -> " << numbers[i] << endl;



    return 0;
}
