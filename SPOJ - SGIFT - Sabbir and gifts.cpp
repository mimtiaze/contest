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

template <class ForwardIterator, class T>
bool binary_search (ForwardIterator first, ForwardIterator last, const T& val)
{
  first = std::lower_bound(first,last,val);
  return (first!=last && !(val<*first));
}

vector<int> a;
ll sum[100000+10];

int main()
{
    sync;
	int n,q;



	cin >> n;

	FOR(n){
	    int temp;
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(),a.begin()+n);
	sum[0] = a[0];

	FORI(i,1,n)
		sum[i] = sum[i-1] + a[i];

	cin >> q;
	while(q--)
	{
        int l,r;
        cin>>l>>r;

        vector<int>::iterator it1,it2;
        it1 = lower_bound(a.begin(),a.begin()+n,l);
        it2 = upper_bound(a.begin(),a.begin()+n,r);

        int v1 = it1 - a.begin();
        int v2 = it2 - a.begin();

        if(a[v2]!=r)
			v2--;

		if(v1==0)
			cout<<sum[v2]<<endl;
		else
			cout<<sum[v2]-sum[v1-1]<<endl;

	}
}
