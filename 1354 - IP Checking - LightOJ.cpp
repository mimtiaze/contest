#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<stack>
#include<sstream>
#include<queue>
#include<map>

using namespace std;

int convertBinaryToDecimal(long long n){

    int decimalNumber = 0, i = 0, remainder;
    while (n!=0){
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }

    return decimalNumber;
}

int main(){
	
	int t;
	scanf("%d",&t);

	for(int test=1;test<=t;test++){
		int a1,b1,c1,d1;
		int a2,b2,c2,d2;
		scanf("%d.%d.%d.%d",&a1,&b1,&c1,&d1);
		scanf("%d.%d.%d.%d",&a2,&b2,&c2,&d2);

		convertBinaryToDecimal(2);
		convertBinaryToDecimal(10);
		convertBinaryToDecimal(16);

		int tempA = convertBinaryToDecimal(a2);
		int tempB = convertBinaryToDecimal(b2);
		int tempC = convertBinaryToDecimal(c2);
		int tempD = convertBinaryToDecimal(d2);

		if(a1==tempA && b1==tempB && c1==tempC && d1==tempD)
			printf("Case %d: Yes\n",test);
		else
			printf("Case %d: No\n",test);
	}

	return 0;
}
