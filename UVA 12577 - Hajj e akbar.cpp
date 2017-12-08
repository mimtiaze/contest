#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

int main(){

	string c;
	int i=1;

	while(getline(cin,c)){
	
		if(c=="Hajj")
			printf("Case %d: Hajj-e-Akbar\n",i);
		else if(c=="Umrah")
			printf("Case %d: Hajj-e-Asghar\n",i);
		else if(c=="*")
			break;
		
		i++;
	
	}



    return 0;
}