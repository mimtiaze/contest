#include<stdio.h>

int main(void)
{
    int a = 10;

    a = 10;
    printf("%d %d\n",a,a++);
    printf("%d %d\n",a,++a);

    return 0;
}
