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

int aSpecialCounter(int n);

int main(){

	int t;

	cin >> t;

	while(t--){	
		int n;
		vector <int > input;
		map <int, int> list;

		cin >> n;
		FOR(n){
			int temp;
			cin >> temp;
			
			if(list.find(temp)==list.end()){
				list[temp] = 1;
			}else{
				list[temp] = list[temp]+1;
			}

		}

		int count = 0;
		for(map<int, int>::iterator it = list.begin();it!=list.end();++it){
			if((it->second)>1){
				count+=aSpecialCounter(it->second);
			}
		}

		cout << count << endl;

	
	}


	return 0;
}

int aSpecialCounter(int n){

	int ret = 0;
	for(int i=1,increasingAmount=0;i<=n;i++){
		ret = ret + increasingAmount;
		increasingAmount = increasingAmount + 2;
	}

	return ret;
}
