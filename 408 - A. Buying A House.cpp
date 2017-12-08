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
#define inFIle freopen("input.txt", "r", stdin);
#define outFile freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;


int main(){

	int n,m,k;

	cin >> n >> m >> k;
	vector<int> input;

	FOR(n){
		int temp;
		cin >> temp;
		input.push_back(temp);
	}

	int minDist = INT_MAX;
	FOR(n){
		if(input[i]<=k && input[i]!=0){
			int temp = abs((i+1)-m)*10;
			if(minDist>temp)
				minDist = temp;
		}
	}

	cout << minDist << endl;

	return 0;
}
