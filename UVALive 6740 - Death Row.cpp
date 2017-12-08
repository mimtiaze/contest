#include<iostream>

using namespace std;

int main(){

	int t;
	cin  >> t;

	while(t--){
		
		long long int n;
		cin >> n;
		
		if(n==1) cout << "1" << endl;
		else if(n==2) cout << "2" << endl;
		else if(n==3) cout << "3" << endl;
		else if(n%2==0) cout << "3" << endl;
		else cout << "4" << endl;
	}
}