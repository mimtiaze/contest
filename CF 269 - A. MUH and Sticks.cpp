#include<bits/stdc++.h>
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


int main()
{
    int a[6];
    FOR(6)
        cin >> a[i];

    int lengths[10];
    mem(lengths);
    FOR(6)
        lengths[a[i]]++;
    int distinct = 0;
    bool legOK = false;
    FOR(10){
        if(lengths[i]!=0) distinct++;
        if(lengths[i]>=4) legOK = true;
    }
    //cout << distinct << endl;
    if(!legOK && distinct!=1){
        cout << "Alien\n";
        return 0;
    }
    if(distinct==1)
        cout << "Elephant\n";
    else if(distinct==3)
        cout << "Bear\n";
    else if(distinct>3)
        cout << "Alien\n";
    else{
        FOR(10){
            if(lengths[i]==2){
                cout << "Elephant\n";
                return 0;
            }
        }
        cout << "Bear\n";
    }


    return 0;
}
