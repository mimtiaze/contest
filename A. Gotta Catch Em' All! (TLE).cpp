#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;

int main(){


	string s;
	string targetedStr = "Bulbasaur";
	int targetedStrSize = targetedStr.length();
	int targerStrSizeCount = 0;
	int totalWordCount = 0;
	int repeatCounter = 0;

	cin >> s;

	for(int i=0;i<s.length();i++){
		if(targerStrSizeCount==0 && targetedStr[0]==s[i]){
			s[i]='*';
			targerStrSizeCount++;
			i=0;
		}
		if(targerStrSizeCount==1 && targetedStr[1]==s[i]){
			s[i]='*';
			targerStrSizeCount++;
			i=0;
		}
		if(targerStrSizeCount==2 && targetedStr[2]==s[i]){
			s[i]='*';
			targerStrSizeCount++;
			i=0;
		}
		if(targerStrSizeCount==3 && targetedStr[3]==s[i]){
			s[i]='*';
			targerStrSizeCount++;
			i=0;
		}
		if(targerStrSizeCount==4 && targetedStr[4]==s[i]){
			s[i]='*';
			targerStrSizeCount++;
			i=0;
		}
		if(targerStrSizeCount==5 && targetedStr[5]==s[i]){
			s[i]='*';
			targerStrSizeCount++;
			i=0;
		}
		if(targerStrSizeCount==6 && targetedStr[6]==s[i]){
			s[i]='*';
			targerStrSizeCount++;
			i=0;
		}
		if(targerStrSizeCount==7 && targetedStr[7]==s[i]){
			s[i]='*';
			targerStrSizeCount++;
			i=0;
		}
		if(targerStrSizeCount==8 && targetedStr[8]==s[i]){
			s[i]='*';
			targerStrSizeCount++;
			i=0;
		}
		
		if(targerStrSizeCount==9){
			targerStrSizeCount=0;
			i=0;
			totalWordCount++;
			repeatCounter=0;
		}

		if((i+1)==s.length() && repeatCounter<s.length()){
			repeatCounter++;
			i=0;
		}
	
	}

	cout << totalWordCount << endl;

	return 0;
}
