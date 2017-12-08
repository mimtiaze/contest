#include<iostream>
#include<cmath>

using namespace std;

long long mypow(long long base, long long power);

long long mypow(long long base, long long powerrr){

    long long ans=1;

    if(powerrr==0)
        return 1;
    else if(powerrr==1)
        return base;

    for(long long i=0;i<powerrr;i++)
        ans = ans*base;

    return ans;
}

int main(){

    long long l,r,k;

    while(1){
		bool printed=false;

        if(!(cin >> l >> r >> k))
            break;
        long long power=mypow(k,0);

        for(int i=1;power<=r;i++){
            if(power>=l){
                if(printed)
                    cout << " " << power ;
                else
                    cout << power ;
				if(!printed)
					printed=true;
			}
            power=mypow(k,i);

        }
		if(!printed)
			cout << "-1";
		cout << endl;

    }

    return 0;
}

