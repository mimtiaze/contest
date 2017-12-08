#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int main(){

	int letter;
	string recievers[1000+10];

	cin >> letter;

	for(int i=0;i<letter;i++)
		cin >> recievers[i];
	
	int currentPos=1,step=0;;

	for(int i=0;i<letter;i++){
		if(recievers[i]=="Alice" || recievers[i]=="Ariel" || recievers[i]=="Aurora" || recievers[i]=="Phil" || recievers[i]=="Peter" || recievers[i]=="Olaf" || recievers[i]=="Phoebus" || recievers[i]=="Ralph" || recievers[i]=="Robin"){
			step+=abs(currentPos-1);
			currentPos=1;
		}
		if(recievers[i]=="Bambi" || recievers[i]=="Belle" || recievers[i]=="Bolt" || recievers[i]=="Mulan" || recievers[i]=="Mowgli" || recievers[i]=="Mickey" || recievers[i]=="Silver" || recievers[i]=="Simba" || recievers[i]=="Stitch"){
			step+=abs(currentPos-2);
			currentPos=2;
		}
		if(recievers[i]=="Dumbo" || recievers[i]=="Genie" || recievers[i]=="Jiminy" || recievers[i]=="Kuzko" || recievers[i]=="Kida" || recievers[i]=="Kenai" || recievers[i]=="Tarzan" || recievers[i]=="Tiana" || recievers[i]=="Winnie"){
			step+=abs(currentPos-3);
			currentPos=3;
		}
	}

	cout << step << endl;


	return 0;
}