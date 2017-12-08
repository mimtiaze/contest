#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    long n, t, c;
    cin >> n >> t >> c;

    vector<long> vec;
    vec.push_back(-1);

    for(int k=0;k<n;k++){
        long temp;
		cin >> temp;

        if(temp > t)
			{vec.push_back(k);
		}
    }

    vec.push_back(n);
    long ways(0);
    for(int k = 0; k + 1 < vec.size(); k++){
        long diff = vec[k + 1] - vec[k];
        if(diff > c){ways += diff - c;}
    }
    printf("%ld\n", ways);
    return 0;
}
