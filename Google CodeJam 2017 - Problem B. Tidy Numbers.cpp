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
#define inFIle freopen("B-small-attempt0.in", "r", stdin);
#define outFile freopen("output.out", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

template <typename T>
std::string NumberToString ( T Number ){
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}



long long int StringToNumber ( string Text ) {                               
	stringstream ss(Text);
	long long int result;
	return ss >> result ? result : 0;
}


bool checkTheNumber(string str){
	for(long long int i=0;i<str.size()-1;i++){
		char a = str[i];
		char b = str[i+1];
		if(a>b)
			return false;
	}
	
	return true;
}


int main(){

	//inFIle;
	//outFile;
	long long int N;

	cin >> N;
	getchar();

	for(long long int test = 1; test <= N; test++){
		string input;
		cin >> input;

		long long int temp = StringToNumber(input);
		input = NumberToString(temp);

		if(input.size()==1){
			cout << "Case #" << test << ": " << input << endl;
		}else{
			while(1){
				if(checkTheNumber(input))
					break;
				long long int temp = StringToNumber(input);
				temp--;
				input = NumberToString(temp);
			}
			cout << "Case #" << test << ": " << input << endl;
		}
	}


	return 0;
}
