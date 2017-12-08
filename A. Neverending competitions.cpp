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
#include <set>
#include <cassert>
#include <numeric>

using namespace std;

int main(){
	
	int n,countOut = 0;

	scanf("%d",&n);
	getchar();

	string home,str;
	cin >> home;

	for(int i=0;i<n;i++){
		cin >> str;
		string a,b;
		a = str.substr(0,3);
		b = str.substr(5,3);

		if(a == home)
			countOut++;
		if(b == home)
			countOut--;

	}


	if(countOut==0)
		printf("home\n");
	else
		printf("contest\n");


	return 0;
}
