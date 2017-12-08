#include<iostream>

using namespace std;

int main(){

    int num,pow;

    while(1){

        if(!(cin >> num))
            break;
        if(!(cin >> pow))
            break;

        int digit=1;
        for(int i=0;i<pow;i++){
            int temp_num=digit*num;
            digit=temp_num%10;
        }

        cout << digit << endl;

    }


    return 0;
}
