
#include<bits/stdc++.h>
using namespace std;

#define FOR(n)          for(int i=0; i<(int)(n); ++i)
#define FORI(i, s, n)   for(int i=(int)(s); i<(int)(n); ++i)
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
#define lng             length()
#define sz              size()

#define input           freopen("input.txt", "r", stdin);
#define sync            {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define dbg(args...)    {string sss(#args);sss+=',';cout<<"-->";debugger::call(all(sss), args);cout<<"\n";}
#define dbgA(A, n)      {cout<<"-->"<<#A<<"=(";FOR(n)cout<<A[i]<<" ";cout<<")\n";}
#define dbgA2(A, n, m)  {cout<<"-->"<<#A<<"=\n";FOR(n){FORI(j, 0, m){cout<<A[i][j]<<" ";}cout<<"\n";}cout<<"\n";}

template <typename T>inline bool isVowel(T ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
template <typename T>inline bool isConst(T ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}

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
    string a,b,c;
    getline(cin ,a);
    getline(cin ,b);
    getline(cin ,c);

    int l1,l2,l3;
    l1=l2=l3=0;

    FOR(a.lng)
    {
        if(isVowel(a[i]))
        {
            l1++;
        }

    }

    FOR(b.lng)
    {
        if(isVowel(b[i]))
        {
            l2++;
        }
    }

    FOR(c.lng)
    {
        if(isVowel(c[i]))
        {
            l3++;
        }

    }

    if(l1==5 && l2==7 && l3==5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
