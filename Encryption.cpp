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

	string tempStr;
	char stored[9+1][9+1];
	cin >> tempStr;

	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			stored[i][j] = NULL;

	int row = floor(sqrt(tempStr.length()));
	int coloum = ceil(sqrt(tempStr.length()));

	bool increaseRow = false;
	while((row*coloum)<tempStr.length()){
		if(!increaseRow){
			row++;
			increaseRow = true;
		}else{
			coloum++;
		}
	}
	

	int traverseString = 0;
	for(int i=0;i<row;i++){
		for(int j=0;j<coloum;j++){
			if(tempStr[traverseString]){
				stored[i][j] = tempStr[traverseString];
				traverseString++;
			}
		}
	}

	string str = "";
	for(int j=0;j<coloum;j++){
		for(int i=0;i<row;i++){
			if(stored[i][j])
				str+=stored[i][j];
		}

		if(str.length()<(row*coloum))
			str+=" ";
	}

	cout << str << endl;

	return 0;
}
