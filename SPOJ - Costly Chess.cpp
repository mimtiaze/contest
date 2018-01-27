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


int board[8][8];
int x[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int y[] = {-2, -1, 1, 2, 2, 1, -1, -2};


bool inside(int m,int n){
    return (m >= 0 && m < 8 && n >= 0 && n < 8);
}

int dij(int a,int b,int c, int d){
    queue<int> tracker;
    tracker.push(a);
    tracker.push(b);

    while(!tracker.empty()){
        int a1 = tracker.front();
        tracker.pop();
        int b1 = tracker.front();
        tracker.pop();

        FOR(8){
            int temp1 = a1 + x[i];
            int temp2 = b1 + y[i];

            if(inside(temp1,temp2) && (board[temp1][temp2] > (board[a1][b1] + (a1*temp1 + b1*temp2) ))){
                board[temp1][temp2] = board[a1][b1] + (a1*temp1 + b1*temp2);
                tracker.push(temp1);
                tracker.push(temp2);
            }
        }
    }

    return board[c][d]==INT_MAX?-1: board[c][d];
}

int main()
{
    sync;
    //input;
    int a,b,c,d;
    while(cin >> a >> b >> c >> d){
        FORI(i,0,8)
            FORI(j,0,8)
                board[i][j] = INT_MAX;



        board[a][b]=0;
        int res = dij(a,b,c,d);
//        FORI(i,0,8){
//            FORI(j,0,8)
//                cout << board[i][j] << " ";
//            cout << endl;
//        }

        cout << res << endl;
    }

    return 0;
}
