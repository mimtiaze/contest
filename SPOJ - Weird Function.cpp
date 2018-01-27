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
//#define ull             unsigned long long
#define mem(A)          memset(A, 0, sizeof(A))
#define lg              length()
#define sz              size()

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


#define mod 1000000007


int main()
{
    //sync;
    //input;
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,n;
        cin >> a >> b >> c >> n;

        priority_queue< ll, vector< ll >, greater< ll > > R;
        priority_queue< ll, vector< ll >, less< ll > > L;
        L.push(1);
        ll sum = 1;

        FORI(i,2,n+1){

            ll maiden = L.top();
            ll temp = (maiden*a + b*i + c) % mod;
            //dbg(temp);
            sum+=temp;


            if(L.size()>R.size()){
                if(temp>=maiden){
                    R.push(temp);
                }else{
                    R.push(L.top());
                    L.pop();
                    L.push(temp);
                }
            }else{
                int temp2 = R.top();
                if(temp<=temp2){
                    L.push(temp);
                }else{
                    L.push(R.top());
                    R.pop();
                    R.push(temp);
                }
            }

        }

        cout << sum << endl;

    }

    return 0;
}
