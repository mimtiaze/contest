
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

    string s;
    cin >> s;

    int zero = 0, one = 0;
    int countt = 0;
    bool countStart = false;

    FOR(s.length())
    {
        if(s[i]=='1') countStart = true;
        else if(countStart)
        {
            countt++;
        }

    }

    if((countt)>=6) cout << "yes" << endl;
    else cout << "no" << endl;

    //main();
	return 0;
}
