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

#define FOR(n) for(int i=0; i<n; i++)
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){

	long long int n;
	int x;

	cin >> n >> x;

	int compressed = n%6;

	for(compressed;compressed>0;compressed--){
		if(compressed%2==0){
			if(x == 1)	    
				x = 2;
			else if(x == 2) 
				x = 1;
		}else{
			if(x == 0)	  
				x = 1;
			else if(x == 1)
				x = 0;
		}
	}

	cout << x << endl;

	return 0;
}
