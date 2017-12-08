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

	int a,b;

	cin >> a >> b;

	if(a!=0 || b!=0){
		int year = 0;
		while(a<=b){
			a*=3;
			b*=2;
			year++;
		}

		cout << year << endl;
	}else{
		cout << "0" << endl;
	}

	return 0;
}
