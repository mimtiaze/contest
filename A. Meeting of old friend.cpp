#include<stdio.h>

int main(){

	int l1,r1,l2,r2,k;

	scanf("%d %d %d %d %d",&l1,&r1,&l2,&r2,&k);

	int returnValue=0;

	int diff=r1-l2;
	if(diff>0){
		diff+=1;
		if(k<=r1 && k>=l2){
			diff-=1;
		}
		returnValue=diff;
	}

	printf("%d\n",returnValue);

	return 0;
}