#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define ll long long int

using namespace std;

struct info
{
    int l,h;
}v[20000];
bool comp(info x,info y)
{
    return x.h < y.h;
}
int main()
{
    int x,y,i,j,n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        int a[n+1],arr[n+1];
        for(i=0;i<n;i++)
        {
            a[i] = i+1;
        }
        int in=0;
        for(i=0;i<n;i++)
            arr[i] = 0;
        for(i=0;i<m;i++)
        {
            cin>>v[i].h>>v[i].l;
        }
        stable_sort(v,v+m,comp);
        for(i=0;i<m;i++)
        {
            if(arr[v[i].h-1] == 0)
            {
                cout<<v[i].h<<" ";
                arr[v[i].h-1] = 1;
                a[v[i].h-1] = -1;
            }
            if(arr[v[i].l-1] == 0)
            {
                cout<<v[i].l<<" ";
                //arr[v[i].h-1] = 1;
                arr[v[i].l-1] = 1;
                a[v[i].l-1] = -1;
            }

        }


        for(i=0;i<n;i++)
        {
            if(a[i]!=-1)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
