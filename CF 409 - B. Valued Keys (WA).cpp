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

	string x,y;

	cin >> x;
	cin >> y;

	string z = "";
	bool terminate = false;

	FOR(x.size()){
		if(y[i]<x[i])
			z+=y[i];
		else if(y[i]==x[i]){
			if(y[i]=='z'){
				z+=x[i];
			}
			else
				z+=x[i]+1;
		}else{
			cout << -1 << endl;
			terminate = true;
		}
	}

	if(!terminate)
		cout << z << endl;


	return 0;
}
