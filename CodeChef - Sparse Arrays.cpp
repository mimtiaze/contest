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
#define in freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	map <string, int > list;

	int N,Q;

	cin >> N;
	getchar();
	FOR(N){
		string temp;
		cin >> temp;

		if(list.find(temp)==list.end()){
			list[temp] = 1;
		}else{
			list[temp] = list[temp]+1;
		}
	}

	cin >> Q;
	getchar();
	FOR(Q){
		string temp;
		cin >> temp;

		if(list.find(temp)==list.end()){
			cout << "0" << endl;
		}else{
			cout << list[temp] << endl;
		}
	}


	return 0;
}
