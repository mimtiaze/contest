#include<cstdio>

int gcd(int a, int b){
    if(b==0)
		return a;
	return gcd(b,a%b);
}

int main(){

	int input;

	while(1){
		scanf("%d",&input);
		if(input==0) break;

		int G=0;
		for(int i=1;i<input;i++)
			for(int j=i+1;j<=input;j++)
				G+=gcd(i,j);	

		printf("%d\n",G);
	}

	return 0;
}