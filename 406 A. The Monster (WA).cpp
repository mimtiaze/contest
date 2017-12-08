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
#include<climits>
#include<map>
#include <set>
#include <cassert>
#include <numeric>

#define FOR(n) for(int i=0; i<n; i++)
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){

	int a,b,c,d;

	cin >> a >> b;
	cin >> c >> d;

	int player1Sts,player2Sts;
	if(a%2==0){
		if(b%2==0)
			player1Sts = 2;
		else
			player1Sts = 1;
	}else{
		player1Sts = 3;
	}

	if(c%2==0){
		if(d%2==0)
			player2Sts = 2;
		else
			player2Sts = 1;
	}else{
		player2Sts = 3;
	}

	if(player1Sts==player2Sts || player1Sts==3 || player2Sts==3){
			int result;
			for(int i=0;;i++){
				int sum1 = b + i*a;
				int factor = (sum1-d)/c;
				int sum2 = d + c*factor;

				if(sum1==sum2 && factor>=0){
					result = sum1;
					break;
				}
			}
			cout << result << endl;	

	}else{
		cout << "-1" << endl;
	}

	return 0;
}
