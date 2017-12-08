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

#define FOR(n) for(int i=0; i<n; i++)
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){

	int s,t,a,b,m,n;
	int distFromA,distFromB;
	int orange=0,apple=0;

	cin >> s >> t;
	cin >> a >> b;
	cin >> m >> n;

	distFromA = a - s;
	distFromB = t - b;

	FOR(m){
		int temp;
		cin >> temp;
		temp+=a;
		if(temp>=s && temp<=t)
			apple++;
	}

	FOR(n){
		int temp;
		cin >> temp;
		temp+=b;
		if(temp>=s && temp<=t)
			orange++;
	}

	cout << apple << endl;
	cout << orange << endl;


	return 0;
}
