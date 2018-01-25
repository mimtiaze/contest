#include<iostream>

using namespace std;

int main(){

    int num;
    while(1){
        cin >> num;
        if(!num) break;

        int a=0,b=0,flag=1,extra=1,toggle=1;
        while(num){
            toggle?toggle=!toggle:extra <<=1;

            if(num & 1){
                a |= flag? extra:0;
                b |= !flag? extra:0;

                flag = !flag;
            }
            num >>=1;
        }
        cout << a << " " << b << endl;
    }
	return 0;
}

