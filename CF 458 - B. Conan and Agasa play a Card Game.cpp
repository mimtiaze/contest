
#include<bits/stdc++.h>
using namespace std;

#define FOR(n)          for(int i=0; i<(int)(n); ++i)
#define FORI(i, s, n)   for(int i=(int)(s); i<(int)(n); ++i)
#define F0RIJ(i, a)     for(int i=0; i<(int)(a); i++)
#define FORP(x)         for(__typeof__((x).begin()) it=(x).begin(); it!=(x).end(); ++it)

#define all(V)          V.begin(),V.end()
#define FF              first
#define SS              second
#define pb              push_back
#define pii             pair<int, int>
#define ll              long long
#define ull             unsigned long long
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


int inputs[100000+10];
int main()
{
    sync;
    int n;
    cin >> n;
    //vector<int> in;

    FOR(100000+10) inputs[i]=0;

    FOR(n){
        int temp;
        cin >> temp;
        inputs[temp]++;
    }

    //sort(in.begin(),in.end());

//    int maxx = in[0];
//
//    FOR(n){
//        if(maxx<in[i]) maxx = in[i];
//    }
//
//    int cnt = 0;
//    FOR(n){
//        if(in[i]==maxx) cnt++;
//    }

    int win = 2;
    for(int i=100000; i>0 ;i--){
        if(inputs[i]!=0){
            if(inputs[i]%2==1){
                win=1;
                break;
            }
        }
    }

    if(win==1)
        cout << "Conan" << endl;
    else
        cout << "Agasa" << endl;

    //main();
    return 0;

}
