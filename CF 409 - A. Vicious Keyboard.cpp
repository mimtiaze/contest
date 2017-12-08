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

	string s;

	cin >> s;

	int vkCounter=0;

	FOR(s.size()-1){
		if(s[i]=='V' && s[i+1]=='K'){
			vkCounter++;
			s[i+1] = '*';
			s[i] = '*';
		}
	}

	FOR(s.size()-1){
		if(s[i]=='V' && s[i+1]=='V'){
			vkCounter++;
			break;
		}
		if(s[i]=='K' && s[i+1]=='K'){
			vkCounter++;
			break;
		}
	}

	cout << vkCounter << endl;

	return 0;
}
