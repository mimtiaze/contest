#include<cstdio>


int main(){

	int n,k;

	scanf("%d %d",&n,&k);

	int totalTImeNeeded=0;
	int solvedProblem=0;
	int timeCanBeGIven = (4*60) - k; // 4 hour

	for(int i=1;i<=n;i++){
		if(timeCanBeGIven>=totalTImeNeeded){
			totalTImeNeeded+=(i*5);
			solvedProblem++;
		}
		else{
			break;
		}
	}

	if(timeCanBeGIven<totalTImeNeeded)
		solvedProblem--;

	printf("%d\n",solvedProblem);


	return 0;
}