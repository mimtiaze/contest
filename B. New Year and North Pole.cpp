#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){

	int t;
	int polesMove[50+10];
	string poles[50+10];
	bool result = true;

	cin >> t;

	for(int i=0;i<t;i++){
		cin >> polesMove[i] >> poles[i];
	}

	long long height = 0, length = 0;

	for(int i=0;i<t;i++){

		if(i==0 && poles[i]!="South"){
			result = false;
			break;
		}

		if(poles[i]=="North"){
			if(height==0 && poles[i]!="South"){
				result = false;
				break;
			}else if(height==20000 && poles[i]!="North"){
				result = false;
				break;
			}


			if((height-polesMove[i])>=0){
				height-=polesMove[i];
			}
			else{
				result = false;
				break;
			}

		}else if(poles[i]=="South"){
			if(height==0 && poles[i]!="South"){
				result = false;
				break;
			}else if(height==20000 && poles[i]!="North"){
				result = false;
				break;
			}


			if((height+polesMove[i])<=20000){
				height+=polesMove[i];
			}
			else{
				result = false;
				break;
			}


		}else if(poles[i]=="West"){
			if(height==0 && poles[i]!="South"){
				result = false;
				break;
			}else if(height==20000 && poles[i]!="North"){
				result = false;
				break;
			}

			length+=(polesMove[i]%40000);


		}else if(poles[i]=="East"){
			if(height==0 && poles[i]!="South"){
				result = false;
				break;
			}else if(height==20000 && poles[i]!="North"){
				result = false;
				break;
			}

			length-=(polesMove[i]%40000);

		}
	}

	if(result && height==0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}


	return 0;
}