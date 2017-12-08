#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>
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

	getline(cin , s);

	int BCount = 0;
	int uCount = 0;
	int lCount = 0;
	int bCount = 0;
	int aCount = 0;
	int sCount = 0;
	int a2Count = 0;
	int u2Count = 0;
	int rCount = 0;
	string temp = s;
	for(int i=0;temp[i];i++) if(temp[i]=='B') BCount++;
	for(int i=0;temp[i];i++) if(temp[i]=='u') uCount++;
	for(int i=0;temp[i];i++) if(temp[i]=='l') lCount++;
	for(int i=0;temp[i];i++) if(temp[i]=='b') bCount++;
	for(int i=0;temp[i];i++) if(temp[i]=='a') aCount++;
	for(int i=0;temp[i];i++) if(temp[i]=='s') sCount++;
	//for(int i=0;temp[i];i++) if(temp[i]=='a') a2Count++;
	//for(int i=0;temp[i];i++) if(temp[i]=='u') u2Count++;
	for(int i=0;temp[i];i++) if(temp[i]=='r') rCount++;

	if(aCount%2==0){
		a2Count = aCount / 2;
		aCount = aCount / 2;
	}else{
		a2Count = aCount / 2 + 1;
		aCount = aCount / 2;
	}
	
	if(uCount%2==0){
		u2Count = uCount / 2;
		uCount = uCount / 2;
	}else{
		u2Count = uCount / 2 + 1;
		uCount = uCount / 2;
	}

	int arr[9] = {BCount, uCount, lCount, bCount, aCount, sCount, a2Count, u2Count, rCount};

	int min = 9999999;
	for(int i=0;i<9;i++){
		if(arr[i]<min)
			min = arr[i];
	}

	cout << min << endl;

	return 0;
}
