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
#define inFIle freopen("input.txt", "r", stdin);
#define outFile freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;


int main(){

	/*inFIle;
	outFile;*/

	int N,Q;
	vector<string> input;
	
	cin >> N;
	getchar();

	for(int i=0;i<2*N;i++){
		string temp;
		getline(cin , temp);
		input.push_back(temp);
	}

	cin >> Q;
	getchar();

	for(int i=0;i<Q;i++){
		string temp;
		getline(cin , temp);
		
		for(int j=0;j<input.size()-1;j++){
			if(temp==input[j]){
				cout << input[j+1] << endl;
				break;
			}
		}
	}


	return 0;
}
