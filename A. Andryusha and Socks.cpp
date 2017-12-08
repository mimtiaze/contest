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
	int t;
	cin >> t;

	map <int, int> list;
	
	int max = 0;
	int var = 0;
	int len = 2*t;

	for(int i=0;i<t;i++){
		list[i] = 0;
	}

	for(int i=0;i<len;i++){
		int temp;
		cin >> temp;

		
		list[temp]=list[temp] + 1;
		
		if(list[temp]==2){
			var--;
			list[temp]=0;
		}else{
			var++;
		}
		if(var>max)
			max = var;
		

	}


	cout << max << endl;

	return 0;
}
