#include<bits/stdc++.h>
using namespace std;

int main(){

    int s=0,p=0,r=0;
    map<string, char> mapping;

    for(int i=0;i<3;i++){
        string temp;
        cin >> temp;
        if(temp=="rock") r++;
        if(temp=="paper") p++;
        if(temp=="scissors") s++;

        if(i==0) mapping[temp]='F';
        if(i==1) mapping[temp]='M';
        if(i==2) mapping[temp]='S';
    }

    if(r==1 && s==2) cout << mapping["rock"] << endl;
    else if(p==1 && r==2) cout << mapping["paper"] << endl;
    else if(s==1 && p==2) cout << mapping["scissors"] << endl;
    else cout << "?" << endl;

}
