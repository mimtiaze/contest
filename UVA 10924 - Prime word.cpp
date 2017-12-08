#include<cstdio>
#include<string>
#include<cmath>
#include<cstring>
#include<iostream>


using namespace std;

#define SIZE 100000

int status[SIZE];

void sieve(){

	int i,j;
	for(i=0;i<SIZE;i++) 
		status[i]= 0;
	int sq = (int)sqrt(SIZE);

	for(i=4;i<=SIZE;i+=2) 
		status[i] = 1;
	for(i=3;i<=sq;i+=2){
		if(status[i]==0) {
			for(j=2*i;j<=SIZE;j+=i) status[j]=1;
		}
	}
	status[1] = 1;
}

int main(){

	//freopen("output.txt","w",stdout);
	//freopen("input.txt","r",stdin);

	sieve();
	status[1]=0;
	string in;
	
	while((cin >> in)){
		int number = 0;
		for(int i=0;i<in.length();i++){
			if(in[i]>=65 && in[i]<=90){
				//cout << in[i] << " -> " << (in[i]-65)+27 << endl;
				number+=(in[i]-65)+27;
			}
			else if(in[i]>=97 && in[i]<=122){
				//cout << in[i] << " -> " << (in[i]-97)+1 << endl;
				number+=(in[i]-97)+1;
			}
		}
		if(status[number]==0){
			cout << "It is a prime word." << endl;
		}else{
			cout << "It is not a prime word." << endl;
		}
	}

	//It is a prime word.
	//It is not a prime word.
	return 0;
}
