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

    int doctor;
    cin >> doctor;

    vector<int> docStart;
    vector<int> docInterval;


    FOR(doctor)
    {
        int a,b;
        cin >> a >> b;
        docStart.push_back(a);
        docInterval.push_back(b);
    }

    int days = docStart[0];

    for(int  i=1;i<doctor;i++)
    {
        int tempDay = docStart[i];
        while(tempDay<=days)   tempDay+=docInterval[i];
        days=tempDay;
    }

    cout << days << endl;


	return 0;
}

