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

template <typename T>
std::string NumberToString ( T Number )
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}


long long int StringToNumber ( string Text )
{
	stringstream ss(Text);
	long long int result;
	return ss >> result ? result : 0;
}

string evenlength(string n)
{

	string res = n;


	for (int j = n.length() - 1; j >= 0; --j)
		res += n[j];

	return res;
}


long long int findSum(int number)
{
    long long int sum = 0;

    for(int i=1;i<=number;i++)
    {
        string n = NumberToString(i);
        long long int a = StringToNumber(evenlength(n));
        sum+=a;
    }


	return sum;
}


int main()
{
    long long int k,p;
    cin >> k >> p;
    long long int temp = findSum(k) % p;
    cout << temp << endl;

    return 0;
}
