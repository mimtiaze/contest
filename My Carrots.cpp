#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int ans;

	if(x1==y1 && x2==y2){
		ans=abs(x1-y2)-1;
	}else if(x1==x2){
		ans=abs(y1-y2)-1;
	}else if(y1==y2){
		ans=abs(x1-x2)-1;
	}else{
		ans=1;
	}

	cout << ans << endl;

    return 0;
}