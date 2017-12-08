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

	int n;
	cin >> n;
	vector <long long int> input;
	
	FOR(n){
		int temp;
		cin >> temp;
		input.push_back(temp);
	}

	sort(input.begin(),input.end());
	long long int min = INT_MAX;
	
	FOR(n-1){
		int diff = abs(input[i]-input[i+1]);
		if(diff<min)
			min = diff;
	}

	long long int minCount = 0;
	FOR(n-1){
		int diff = abs(input[i]-input[i+1]);
		if(diff==min)
			minCount++;
	}

	cout << min <<  " " << minCount << endl;


	return 0;
}
