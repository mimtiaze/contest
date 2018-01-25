#include<bits/stdc++.h>
using namespace std;

int main(){

    set<char> in;
    string temp;
    cin >> temp;

    for ( char c : temp ){
        in.insert(c);
    }

    in.size()%2==0? cout << "CHAT WITH HER!\n": cout << "IGNORE HIM!\n";
}
