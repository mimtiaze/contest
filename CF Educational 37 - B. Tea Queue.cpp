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
#define output           freopen("output.txt", "w", stdout);
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



int in[1010],out[1010],served[1010],n;

int nowInQ(int time){
    FOR(n){
        if(served[i]==0 && in[i]<=time && out[i]>=time)
            return i;
    }

    return -1;
}



int main()
{
//    input;
//    output;
    int t,test=1;
    cin >> t;
    while(t--)
    {
        cin >> n;

        mem(in);
        mem(out);
        mem(served);

        FOR(n){
            int a,b;
            cin >> a >> b;
            in[i] = a;
            out[i] = b;
        }


        FORI(i,1,5000+1){
            int now = nowInQ(i);
            if(now!=-1){
//                cout << "before" << endl;
//                dbg(i,now,served[now],in[now]);
                served[now] = i;
//                cout << "after" << endl;
//                dbg(i,now,served[now],in[now]);
            }
        }

        FOR(n){
            cout << served[i] << " ";
        }
        cout << endl;



    }

    return 0;
}
