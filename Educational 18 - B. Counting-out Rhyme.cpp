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

	int n,k;

	cin >> n >> k;
	
	vector <long long int> in;

	FOR(n){
		in.push_back(i+1);
	}

	long long int currentIndex = 0;
	FOR(k){
		int temp;
		cin >> temp;
		
		currentIndex = ((currentIndex + 1 + temp) % in.size())-1;
		if(currentIndex==-1)
			currentIndex = in.size()-1;
		cout << in[currentIndex] << " ";
		
		in.erase(in.begin()+currentIndex);
	}

	cout << endl;

	return 0;
}
