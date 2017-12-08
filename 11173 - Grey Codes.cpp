#include<cstdio>

int main(){
	
	int t;
	scanf("%d",&t);

	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		printf("%d\n",k^(k>>1));
	
	}

	return 0;
}