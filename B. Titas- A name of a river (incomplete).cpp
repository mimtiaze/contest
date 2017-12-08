#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	for(int testCase=1;testCase<=t;testCase++){
		
		int words;
		string W;
		string allWords[100+20];


		cin >> words >> W;

		for(int i=0,j=0;i<W.length();i++){
			
			if(W[i]==' '){
				for(int x=i-j;x<i+j;x++){
					
				}
			}

		}

	
	}

	return 0;
}