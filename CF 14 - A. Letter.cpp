#include<bits/stdc++.h>
using namespace std;

#define FOR(n)          for(int i=0; i<(int)(n); ++i)
#define FORI(i, s, n)   for(int i=(int)(s); i<(int)(n); ++i)
#define F0RIJ(i, a)     for(int i=0; i<(int)(a); i++)
#define FORP(x)         for(__typeof__((x).begin()) it=(x).begin(); it!=(x).end(); ++it)

#define all(V)          V.begin(),V.end()
#define FF              first
#define SS              second
//#define sz(V)           ((int) (V).size())
#define pb              push_back
#define pii             pair<int, int>
#define ll              long long
#define sz              size()
#define ull             unsigned long long
#define mem(A)          memset(A, 0, sizeof(A))
#define lg              length()

#define all(V)          V.begin(),V.end()
#define clr(A,B)        memset(A,B,sizeof A)

#define input           freopen("input.txt", "r", stdin);
#define output          freopen("output.txt", "w", stdout);
#define sync            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define dbg(args...)    {string sss(#args);sss+=',';cout<<"-->";debugger::call(all(sss), args);cout<<"\n";}
#define dbgA(A, n)      {cout<<"-->"<<#A<<"=(";FOR(n)cout<<A[i]<<" ";cout<<")\n";}
#define dbgA2(A, n, m)  {cout<<"-->"<<#A<<"=\n";FOR(n){FORI(j, 0, m){cout<<A[i][j]<<" ";}cout<<"\n";}cout<<"\n";}

#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;

#define dt ll

struct debugger {
    typedef string::iterator si;
    static void call(si it, si ed) {}
    template<typename T, typename ... aT>
    static void call(si it, si ed, T a, aT... rest) {
        string b;
        for(; *it!=','; ++it) if(*it!=' ')b+=*it;
        cout << b << "=" << a << " ";
        call(++it, ed, rest...);
    }
};

vector<dt> takeInput(dt n){
    vector<dt> v;
    for(dt i=0;i<n;i++){
        dt temp;
        cin >> temp;
        v.push_back(temp);
    }
    return v;
}


int main()
{
    int n,m;
    cin >> n >> m;

    char ca[100][100];

    int cs,ce,rs,re;
    cs=ce=rs=re=INT_MAX;

    FORI(i,0,n){
        bool star=false;
        FORI(j,0,m){
            cin >> ca[i][j];
            if(ca[i][j]=='*'){ star=true;}
            if(ca[i][j]=='*' && j<cs){
                cs=j;
                if(ce==INT_MAX) ce=j;
            }
            if(ca[i][j]=='*' && j>ce){
                ce=j;
            }
        }
        if(star && i<rs){
            rs=i;
            if(re==INT_MAX) re=i;
        }
        if(star && i>re){
            re=i;
        }

    }

    //dbg(rs,re,cs,ce);
    FORI(i,rs,re+1){
        FORI(j,cs,ce+1){
            cout << ca[i][j];
        }
        cout << endl;
    }

    return 0;
}
