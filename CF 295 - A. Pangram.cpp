#include<bits/stdc++.h>
using namespace std;

int main(){

    set<char> in;
    string temp;
    int n;
    cin >> n;
    cin >> temp;

    for ( char c : temp ){
        if(c!=' ') in.insert(tolower(c));
    }

    in.size()==26? cout << "YES\n": cout << "NO\n";
}
