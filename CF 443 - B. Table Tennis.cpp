
#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<stack>
#include<sstream>
#include<queue>
#include<climits>
#include<map>
#include <set>
#include <cassert>
#include <numeric>

#define pb push_back
#define ll long long int
#define ull unsigned long long int
#define gcd(a,b)    __gcd(a,b)
#define FOR(n) for(int i=0; i<n; i++)
#define inFile freopen("input.txt", "r", stdin);
#define outFile freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


using namespace std;



int main(){

    long long int n,k;
    vector<int> power;

    cin >> n >> k;

    FOR(n)
    {
        int temp;
        cin >> temp;
        power.push_back(temp);
    }

    if(k>=(n-1))
    {
       int maxx = -1;
       FOR(n)
       {
           if(power[i]>maxx)
            maxx = power[i];
       }

       cout << maxx << endl;
    }else
    {
        int maxx = power[0];
        int winCount = 0;
        int i=1;
        while(winCount<k)
        {
            if(maxx<power[i])
            {
                maxx = power[i];
                winCount=0;
            }

            winCount++;
            i++;
            if(i==n)
                i=0;
        }

        cout << maxx << endl;
    }


	return 0;
}
