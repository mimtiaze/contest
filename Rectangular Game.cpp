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
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){

	int n;
	long long int a=9999999,b=9999999;
	int x,y;

	cin >> n;
	FOR(n){

		cin >> x >> y;

		a = MIN(a,x);
		b = MIN(b,y);
	}

	cout << a*b << endl;


	return 0;
}
