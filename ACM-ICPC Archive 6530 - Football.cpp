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
#define sync            {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define dbg(args...)    {string sss(#args);sss+=',';cout<<"-->";debugger::call(all(sss), args);cout<<"\n";}
#define dbgA(A, n)      {cout<<"-->"<<#A<<"=(";FOR(n)cout<<A[i]<<" ";cout<<")\n";}
#define dbgA2(A, n, m)  {cout<<"-->"<<#A<<"=\n";FOR(n){FORI(j, 0, m){cout<<A[i][j]<<" ";}cout<<"\n";}cout<<"\n";}

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


int main()
{
    //input;
    int n,g;
    vector<int>need;
    while(cin >> n >> g){
        int x,y,point=0;
        need.clear();
        FOR(n){
            cin >> x >> y;
            int t = y-x;
            if(t==0) point+=1;
            if(t<0) point+=3;
            else need.push_back(t);
        }
        sort(need.begin(),need.end());

        //dbg(need.sz,g);
        FOR(need.sz){
            int drawGap = need[i];
            g-=drawGap;
            //dbg(drawGap,g);
            if(g<0) break;
            need[i]==0? :point+=1;


            //int winGap = (-1) - need[i];
            //g+=winGap;
            g--;
            //dbg(g);
            if(g<0) break;
            //need[i]==0? point+=2:point+=3;
            point+=2;
        }

        cout << point << endl;


    }

    return 0;
}

