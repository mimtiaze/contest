
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




vector<int> fiboSeries(int n){
    vector<int> ret;
    int a=1,b=1;
    ret.push_back(1);
    ret.push_back(1);

    FORI(i,3,n+1){
        int t=b;
        b=a+b;
        ret.push_back(b);
        a=t;
    }

    return ret;
}

int main()
{
    //sync;
    vector<int> fibo = fiboSeries(18);

    int n;
    cin >> n;

    string str = "";


//    FOR(18)
//        cout << fibo[i] << endl;
    FORI(i,1,n+1){

        //FORJ
        if(binary_search(fibo.begin(),fibo.end(),i))
            str+="O";
        else
            str+="o";
    }

    cout << str << endl;

    return 0;
}
