#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int superSum(int k,int n){
	if(k==0)
		return n;

	int returnValue=0;
	for(int i=1;i<=n;i++){
		returnValue+=superSum(k-1,i);
	}
	return returnValue;
}

int main() {
    int k,n;
	scanf("%d %d",&k,&n);

	printf("%d\n",superSum(k,n));

    return 0;
}