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

#define dt int

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
    sync;
    vector<dt> amount;
    vector<dt> cost;
    vector<dt> buyAt;
    dt trackCost,lastIndex,n;
    cin >> n;
    for(dt i=0;i<n;i++){
        dt a,c;
        cin >> a >> c;
        amount.push_back(a);
        cost.push_back(c);
        if(i==0){
            trackCost=c;
            lastIndex=0;
            buyAt.push_back(a);
        }else{
            if(trackCost>c){
                trackCost=c;
                lastIndex=i;
                buyAt.push_back(a);
            }else{
                buyAt.push_back(0);
                buyAt[lastIndex]+=a;
            }
        }
    }

    dt total=0;
    for(dt i=0;i<n;i++){
        if(buyAt[i]!=0){
            total+=(buyAt[i]*cost[i]);
        }
    }


    cout << total;

    return 0;
}
