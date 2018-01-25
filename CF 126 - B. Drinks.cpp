#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i;
    double sum=0,x;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        sum += x;
    }
    sum/=n;

    printf("%.9f\n", sum);

    return 0;
}
