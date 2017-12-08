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
#include<map>

using namespace std;

int main(){

	int a,b,c;

	cin >> a >> b >> c;

	int totalUnit = 1+2+4;

	int tempA = a/1;
	int tempB = b/2;
	int tempC = c/4;

	int min = 999999;
	
	if(tempA<tempB && tempA<tempC)
		min = tempA;
	else if(tempB<tempC)
		min = tempB;
	else
		min = tempC;

	cout << min*totalUnit << endl;


	return 0;
}
