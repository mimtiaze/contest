#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int generateWithCount0(int zero){
	int ret=1;
	for(int i=0;i<zero;i++){
		ret*=10;
	}

	return ret;
}

int main(){

	int t,total=0;
	string command;
	cin >> t;
	getline(cin, command);

	while(t--){
		getline(cin, command);

		if(command == "report"){
			cout << total << endl;
		}else{
			 string s1,temp;
			 stringstream SS(command);

			 SS >> s1;
			 SS >> temp;
			 if(s1 == "donate"){
				//cout << temp << endl;
				int theNumber=0;
				for(int i=0;i<temp.size();i++){
					//cout << generateWithCount0(temp.size()-i-1) << endl;
					theNumber+=(temp[i]-48)*generateWithCount0(temp.size()-i-1);
				}

				total+=theNumber;
			 }
		}
	
	}

	return 0;
}