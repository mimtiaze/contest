#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main(){
	
	int t;
	cin >> t;

	while(t--){
		
		int A,B,total;
		cin >> A >> B >> total;

		double paymentPerUnit=(double)total/(A+B);

		double getA,getB;

		if(A>=B){
			getA = (double)(paymentPerUnit*A)+((A-B)*paymentPerUnit);
		}else{
			getB = (double)(paymentPerUnit*B)+((B-A)*paymentPerUnit);
			getA = (double)total - getB;
		}

		int result = getA;

		cout << getA << endl;
	
	}

	return 0;
}