#include<iostream>

using namespace std;

int main(){

	int n,temp,sum;

	while(1){
		cin >> n;
		if(n==0) break;
		sum = 0;

		for(int i=0;i<n;i++){
			cin >> temp;
			sum+=temp;
		}

		cout << sum << endl;	
	}

	return 0;
}