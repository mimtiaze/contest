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

vector<string> splitingWord(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

int main(){

	int m,n;
	map<string,int> dictionary;

	cin >> m >> n;
	

	for(int i=0;i<m;i++){
		int value;
		string temp;

		getchar();
		cin >> temp;
		getchar();
		cin >> value;
		dictionary[temp] = value;
	}

	getchar();

	for(int i=0;i<n;i++){
		long long int result = 0;
		while(1){
			string temp;
			getline(cin,temp);
			if(temp==".") break;
			vector<string> tokenized = splitingWord(temp,' ');

			for(int i=0;i<tokenized.size();i++){
				if(dictionary.find(tokenized[i])==dictionary.end()){
					continue;
				}else{
					result+=dictionary[tokenized[i]];
				}
			}

		}

		cout << result << endl;
	}


	return 0;
}
