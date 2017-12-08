#include<stdio.h>

int main(){
	
	int t;
	scanf("%d",&t);
	
	for(int testCase=1;testCase<=t;testCase++){
	
		int K,N;
		scanf("%d %d",&K,&N);
	
		int amountOfPoor=0,amountOfOwener=0,amountOfRelativesAndNeighbours=0,totalAmount=0;;

		if(K==0){
		
			totalAmount=N;
			amountOfPoor=totalAmount/3;
			int remaining=amountOfPoor*2;
			amountOfOwener=remaining/3;
			amountOfRelativesAndNeighbours=amountOfOwener*2;

			printf("Case %d:\n%d\n%d\n%d\n",testCase,amountOfPoor,amountOfRelativesAndNeighbours,amountOfOwener);


		}else if(K==1){
			amountOfOwener=N;
			amountOfRelativesAndNeighbours=amountOfOwener*2;
			int temp=amountOfOwener*3;
			int tempTemp=temp/2;
			totalAmount=tempTemp*3;
			amountOfPoor=totalAmount/3;

			printf("Case %d:\n%d\n%d\n%d\n",testCase,amountOfPoor,amountOfRelativesAndNeighbours,totalAmount);
		}
	
	}

	return 0;
}