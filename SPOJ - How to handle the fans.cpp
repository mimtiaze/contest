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



const int N = 1e6+100;  // limit for array size
int n;  // array size

int sum[4 * N + 10];
int num[N];

void build(int att,int L,int R) {  // build the tree
    sum[att] = 0;
    //dbg(att);
    if(L==R){
        sum[att]=num[L];
        return;
    }
    int mid = (L+R)/2;
    build(att*2,L,mid);
    build(att*2+1,mid+1,R);

    sum[att]=sum[att*2]+sum[att*2+1];
}

void updatte(int att,int L,int R,int pos,int val) {  // updatte
    if(L==R){
        sum[att]+=val;
        return;
    }
    int mid = (L+R)/2;
    if(pos<=mid)  updatte(att*2,L,mid,pos,val);
    else updatte(att*2+1,mid+1,R,pos,val);

    sum[att]=sum[att*2]+sum[att*2+1];
}


int query(int att,int L,int R,int l,int r) {  // updatte
    if(r<L || R<l) return 0;
    if(l<=L && R<=r) return sum[att];

    int mid = (L+R)/2;
    int x = query(att*2,L,mid,l,r);
    int y = query(att*2+1,mid+1,R,l,r);

    return x+y;
}

int main() {

    //input;
    int n,q;
    cin >> n >> q;
    mem(num);
    build(1,1,n);

    FOR(q){
        string command;
        int x,y;
        cin >> command;
        cin >> x >> y;

        if(command=="find"){
            cout << query(1,1,n,x,y) << endl;
        }else if(command=="add"){
            updatte(1,1,n,x,y);
        }
    }


  return 0;
}

