#include<bits\stdc++.h>

using namespace std;

int main(){

    int t;

    cin >> t;

    string str[100000+10];
    string *first_item=&str[0];


    for(int i=0;i<t;i++){
        cin >> str[i];
    }

    int group=0;

    if(first_item){
        group++;

        for(int i=1;i<t;i++){
            if(str[i]==str[i-1]){
                continue;
            }
            else{
                group++;
            }
        }
    }

    cout << group << endl;

    return 0;
}

