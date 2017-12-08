#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define ll long long int

using namespace std;

int main()
{
    ll n,m,i,j,a,c=0;
    cin>>n>>m>>a;
    //ll arr[n+2][m+2];
    //scanf("%d %d %d",&n,&m,&a);
    if(n%a==0)
        n = n/a;
    else
    {
        n=n/a;
        n++;
    }
    if(m%a==0)
        m=m/a;
    else
    {
        m=m/a;
        m++;
    }
    cout<<n*m<<endl;
    //printf("%d\n",n*m);

    return 0;
}
