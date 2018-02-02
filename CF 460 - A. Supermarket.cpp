#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    double minimum = 100000;

    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;

        double temp = (double)x/y;
        minimum = min(minimum,temp);

    }

    //cout << minimum*m << endl;
    printf("%.8f",minimum*m);

    return 0;
}
