#include<cstdio>

using namespace std;

int n;
int main(){

    scanf("%d",&n);
    printf("%d\n",n/2);

    while(n){
        if(n==3){
            printf("3 ");
            break;
        }
        else{
			printf("2 ");
		}
        n-=2;
    }
    printf("\n");
    
}