#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int main(){
	long long n;
	int testCase=1;
	while(1){
		cin >> n;
		if(n==0) break;
		long long ans;
		long double x;

		if(n==1 || n==2 || n==3){
			ans=0;
		}else{
			x=(3+sqrt(9+8*n))/2;
			ans=ceil(x);
		}
		cout << "Case "<< testCase<< ": " << ans << endl;
		testCase++;
	}

}
