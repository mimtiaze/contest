#include<cstdio>

int main(){

	int W,H,M;

	while(scanf("%d %d %d",&W,&H,&M)!=EOF){

		int area=W*H;
		int drawnCell=0;
		int tempArea=area;
		int tempW=W;
		int tempH=H;
		int secondTempArea=tempW*tempH;

	
		while(secondTempArea>M){
			tempH--;
			tempW--;
			secondTempArea=tempW*tempH;
		}


		if(W>H){
			while(tempArea>M){
				tempArea-=H;
			}
		}else if(W<=H){
			while(tempArea>M){
				tempArea-=W;
			}
		}


		if(secondTempArea<tempArea)
			printf("%d\n",tempArea);
		else
			printf("%d\n",secondTempArea);
	}
	return 0;
}