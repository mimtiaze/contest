#include<stdio.h>

int main()
{
    int i,j,A[10],n,temp;
    scanf("%d",&n);
    for(int k=0;k<n;k++)
        scanf("%d",&A[k]);
    

    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-i-2;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
	for(int k=0;k<n;k++)
        printf("%d ",A[k]);
    

    return 0;
}