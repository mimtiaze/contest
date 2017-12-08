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

int func(int pos,int prevA,int prevB,int swapped);

int a[10000+10];
int b[10000+10];
int dp[10000+10][2];
int n;


int func(int pos,int prevA,int prevB,int swapped){

	if(dp[pos][swapped]!=-1)
		return dp[pos][swapped];
	if(pos==n)
		return 0;


	int way1 = 99999;
	int way2 = 99999;

	if(b[pos]>prevB && a[pos]>prevA)
		way2 = func(pos+1,a[pos],b[pos],0);
	if(b[pos]>prevA && a[pos]>prevB)
		way1 = func(pos+1,b[pos],a[pos],1) + 1;
	
	return dp[pos][swapped] = min(way1,way2);

}


int main(){

	int t;
	cin >> t;

	while(t--){
		cin >> n;

		memset(dp,-1, sizeof dp);

		FOR(n)
			cin >> a[i];	
		FOR(n)
			cin >> b[i];
			
		int ans = 0;
		ans = func(0,-99,-99,0);
		if(ans > 10001)
			cout << -1 << endl;
		else 
			cout << ans << endl;
	
	}


	return 0;
}
