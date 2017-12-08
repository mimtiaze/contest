#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool checkPalindrome(string s){

	int stringHalf=s.size()/2;
	for(int i=0,j=s.size()-1;i<stringHalf;i++,j--){
		if(s[i]!=s[j])
			return false;
	}

	return true;

}

int main() {
    
	string str;

	cin >> str;
	string tempStr=str;
	string secondTempStr=str;
	int pointer=str.size()-1-1;

	while(!checkPalindrome(tempStr)){
		
		tempStr=tempStr+str[pointer];
		pointer--;
	}

	while(!checkPalindrome(secondTempStr) && secondTempStr.size()<tempStr.size()){
		int half=(secondTempStr.size()/2);
		string temp="";
		for(int i=0;i<half;i++){
			temp+=secondTempStr[i];
		}
		string tempRev="";
		for(int i=temp.size()-1;i>=0;i--){
			tempRev+=temp[i];
		}

		for(int i=half+1,j=0;j<tempRev.size();i++,j++){
			if(secondTempStr[i]!=tempRev[j])
				secondTempStr+=tempRev[j];
		}

	}


	if(tempStr.size()<secondTempStr.size())
		cout << tempStr.size() << endl;
	else
		cout << secondTempStr.size() << endl;

    return 0;
}