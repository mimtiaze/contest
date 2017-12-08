#include<stdio.h>


int main(){

	//freopen("out.txt","w",stdout);

	int t;
	scanf("%d",&t);


	while(t--){
		int hr,min;
		scanf("%d:%d", &hr, &min);


		hr=12-hr-1;
		if(min==0){
			hr++;
		}
		if(hr<=0)
			hr=hr+12;
		if(hr!=0){
			min=60-min;
		}
		if(min==60){
			min=0;
		}
		

		printf("%02d:%02d\n",hr,min);

	}

	return 0;
}