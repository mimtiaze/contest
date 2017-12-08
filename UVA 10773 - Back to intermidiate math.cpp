#include<cstdio>  
#include<cmath>  
  
int main(){

    int test;  
    int d, u, v;  

    scanf("%d", &test);  

    for (int i=1; i<=test;i++){  

        scanf("%d %d %d",&d,&v,&u);  
        printf("Case %d: ",i);  

        if (u>v && v)
            printf("%.3f\n",d*(1.0/sqrt(u*u-v*v)-1.0/u));  
        else  
            puts("can't determine");  
    }  

    return 0;  
}  