#include<bits/stdc++.h>
using namespace std;

#define FOR(n)          for(int i=0; i<(int)(n); ++i)
#define FORI(i, s, n)   for(int i=(int)(s); i<(int)(n); ++i)
#define F0RIJ(i, a)     for(int i=0; i<(int)(a); i++)
#define FORP(x)         for(__typeof__((x).begin()) it=(x).begin(); it!=(x).end(); ++it)

#define all(V)          V.begin(),V.end()
#define FF              first
#define SS              second
#define sz(V)           ((int) (V).size())
#define pb              push_back
#define pii             pair<int, int>
#define ll              long long
#define ull             unsigned long long
#define mem(A)          memset(A, 0, sizeof(A))
#define lg              length()
//#define sz              size()
#define max_lim         10000+10

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



map<string, int> inputs;
vector<int> all[max_lim];
int track[max_lim];
bool cycle;

void dfs(int s){

    track[s] = 1;
    //dbg(s);
    FOR(all[s].size()){
        int d = all[s][i];

        if(!track[d]) dfs(d);

        if(track[d]==1){
            cycle = true;
            return;
        }
    }
    track[s]=2;
}

int main()
{
    //sync;
    //input;
    int t,test=1;
    cin >> t;
    //dbg(t);
    while(t--)
    {
        int n,id=1;
        inputs.clear();
        FOR(max_lim){
            all[i].clear();
            track[i] = 0;
        }
        //mem(track);
        cycle = false;

        cin >> n;

        FOR(n){
            string a,b;
            cin >> a >> b;
            if(!inputs[a]) inputs[a]=id++;
            if(!inputs[b]) inputs[b]=id++;
            all[inputs[a]].push_back(inputs[b]);
        }
        //cout << "reached" << endl;
        //dbg(id);
        FOR(id){
            //dbg(i,track[i]);
            if(!track[i]) dfs(i);
            //dbg(i);
            if(cycle) break;
        }

        if(cycle) cout << "Case " << test++ << ": No\n";
        else cout << "Case " << test++ << ": Yes\n";
    }

    return 0;
}
