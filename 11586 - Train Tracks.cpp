#include<iostream>
#include<string>

using namespace std;


int main(){

	int t;
	string str;

	cin >> t;
	getline(cin, str);

	while(t--){
		string str;
		getline(cin, str);

		int countF=0,countM=0;
		for(int i=0;str[i];i++){
			if(str[i]=='M')
				countM++;
			if(str[i]=='F')
				countF++;
		}

		if(countF==countM && str.size()>3){
			cout << "LOOP" << endl;
		}
		else{
			cout << "NO LOOP" << endl;
		}
	}

	return 0;
}

