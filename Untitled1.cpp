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
    int n,k,i,x;
    cin>>n>>k;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i+1==k)
            x=a[i];
    }
    int c=0;
    //cout<<x<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]>=x && a[i]>0)
            c++;
    }
    cout<<c<<endl;

    return 0;
}
