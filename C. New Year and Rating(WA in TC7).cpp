#include<cstdio>

int rating[200000+20],div[200000+20],t;

int main(){

	
	int currentRating;

	scanf("%d",&t);

	for(int i=0;i<t;i++){
		scanf("%d %d",&rating[i],&div[i]);
	}

	if(div[0]==1){
		currentRating=1901;
	}else if(div[0]==2){
		currentRating=1899;
	}

	bool impossible = false;
	bool infinity = false;

	if(t==1){
		printf("Infinity\n");
		infinity=true;
	}else{
		for(int i=0;i<t;i++){
			if(currentRating>=1900 && div[i]!=1){
				impossible = true;
				break;
			}else if(currentRating<1900 && div[i]!=2){
				impossible = true;
				break;
			}

			currentRating+=rating[i];
		}


	}

	if(impossible){
		printf("Impossible\n");
	}else if(!infinity){
		printf("%d\n",currentRating);
	}


	return 0;
}