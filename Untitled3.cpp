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
    int i,j,n,l,x,y;
    bool t = false,t1 = false, t2 = false,check=false;
    while(cin>>n)
    {
        if(n==0)
            break;
        int a[n+1][n+1],color[n+1],cnt=0;
        memset(a,0,sizeof(a));
        memset(color,0,sizeof(color));
        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>x>>y;
            a[x][y] = 1;
        }
        for(i=0;i<n;i++)
        {
            if(color[i] == 0)
                color[i] = 1;
            for(j=0;j<n;j++)
            {
                if(a[i][j]==1)
                {
                    if(color[i] == 1)
                    {
                        if(color[j] == 0)
                            color[j] = 2;
                        else if(color[j]!=2)
                        {
                            check = true;
                            break;
                        }

                    }
                    else if(color[i] ==2)
                    {
                        if(color[j] == 0)
                            color[j] = 1;
                        else if(color[j]!=1)
                        {
                            check = true;
                            break;
                        }
                    }
                }
            }
            if(check == true)
                break;
        }
        if(check == true)
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j] == 1)
                {
                    if(color[i] == color[j])
                    {
                        cout<<"NOT BICOLORABLE."<<endl;
                        t = true;
                    }
                }

            }
        }
        if(t == false)
            cout<<"BICOLORABLE."<<endl;
        }
        t=false;
        check = false;



    }

    return 0;
}
