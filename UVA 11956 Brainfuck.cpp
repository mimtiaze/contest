
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
    //sync;
    //input;
    //output;
    int t,test=1;
    cin >> t;
    while(t--)
    {
        int arr[100];
        mem(arr);
        string str;
        cin >> str;
        int index = 0;
        FOR(str.sz){
            if(str[i]=='+'){
                arr[index]++;
                if(arr[index]==256) arr[index]=0;
            }
            else if(str[i]=='-'){
                arr[index]--;
                if(arr[index]==-1) arr[index]=255;
            }
            else if(str[i]=='>'){
                index++;
                if(index==100) index=0;
            }
            else if(str[i]=='<'){
                index--;
                if(index==-1) index=99;
            }
        }
        //cout << "Case " << test++ << ": ";
        printf("Case %d: ",test++);
        FOR(99){
            cout << setfill('0') << setw(2) << hex << uppercase << arr[i] << " ";
        }


        cout<< setfill('0') << setw(2) << hex << uppercase << arr[99] << endl;
    }

    return 0;
}
