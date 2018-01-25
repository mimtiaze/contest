#include<bits/stdc++.h>

#define pb push_back
#define sz size()
#define lg length()
#define ll long long int
#define ull unsigned long long int
#define gcd(a,b)    __gcd(a,b)
#define FOR(n) for(int i=0; i<n; i++)
#define inFile freopen("input.txt", "r", stdin);
#define outFile freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;


int main(){

    sinc;

    int a,b,c;

    cin >> a >> b >> c;

    long double res = (long double)a/b;

    stringstream stream;


    stream << fixed << setprecision(24) << res;
    string s = stream.str();

    int x=0;
    FOR(s.sz){
        if(s[i]=='.'){
            x=i+1;
            break;
        }
    }


    //cout << s << endl;

    for(int i=x,j=1;i<20;i++,j++){

        if(s[i]==(c+48)){
            cout << j << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
