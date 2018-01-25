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
#define ll              long long
#define ull             unsigned long long
#define lg              length()
#define all(V)          V.begin(),V.end()

int main(){
    int maxx=0,now=0,n;

    cin >> n;
    FOR(n)
    {
        int a,b;
        cin >> a >> b;
        now+=(b-a);

        maxx = maxx<now? now:maxx;
    }

    cout << maxx << endl;

}
