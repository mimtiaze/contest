#include<cstdio>
#include<string>
#include<cmath>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<stack>
#include<sstream>
#include<queue>
#include<map>

using namespace std;

int main(){

	int a,b;

	cin >> a >> b;

	if(a==0 && b==0){
		cout << "NO" << endl;
	}
	else if(abs(a-b)<=1){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}


	return 0;
}
