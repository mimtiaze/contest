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
#include<set>
#include<cassert>
#include<numeric>

#define pb push_back
#define sz size()
#define lg length()
#define ll long long int
#define ull unsigned long long int
#define gcd(a,b)    __gcd(a,b)
#define FOR(n) for(int i=0; i<n; i++)
#define inFile freopen("input.txt", "r", stdin);
#define outFile freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;



int main(){

    int n;
    vector<long long int> capacity;

    cin >> n;

    long long int totalREmaining = 0;
    FOR(n){
        long long int temp;
        cin >> temp;
        totalREmaining+=temp;
    }

    FOR(n){
        long long int temp;
        cin >> temp;
        capacity.push_back(temp);
    }
    sort(capacity.begin(),capacity.end(),greater<long long int>());

    long long int totalCap = capacity[0] + capacity[1];

    if(totalCap>=totalREmaining && n>=2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


	return 0;
}
