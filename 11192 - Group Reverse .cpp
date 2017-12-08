#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main(){

	while(1){
	
		int group;
		string input,output,temp;

		cin >> group;
		if(group==0) break;

		getchar();
		getline(cin,input);

		int member = input.size()/group;
		bool triggered = true;
		temp="";
		output="";

		for(int i=0;i<input.size();i++){
			if((i)%member==0){
				if(triggered==true)
					triggered=false;
			}
			if(triggered==true){
				temp+=input[i];
			}else{
				for(int j=temp.size()-1;j>=0;j--){
					output+=temp[j];
				}
				temp="";
				triggered=true;
				temp+=input[i];
			}

		}
		for(int j=temp.size()-1;j>=0;j--){
			output+=temp[j];
		}

		cout << output << endl;
	
	
	}

	return 0;
}
