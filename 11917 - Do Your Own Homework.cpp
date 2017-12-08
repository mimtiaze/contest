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

#define pb push_back
#define ll long long int
#define ull unsigned long long int
#define gcd(a,b)    __gcd(a,b)
#define FOR(n) for(int i=0; i<n; i++)
#define inFile freopen("input.txt", "r", stdin);
#define outFile freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){

	int days[110];
	string sub[110];

	int N;

	cin >> N;

	for(int t=1;t<=N;t++){
		int noOfSubject;
		cin >> noOfSubject;

		for(int i=0;i<noOfSubject;i++){
			getchar();
			cin >> sub[i];
			getchar();
			cin >> days[i];
		}

		int D;
		cin >> D;
		getchar();

		string HW;
		cin >> HW;
		int HWDay = -1;

		for(int i=0;i<noOfSubject;i++){
			if(sub[i]==HW){
				HWDay = days[i];
				break;
			}
		}
	
		if(HWDay==-1)
			cout << "Case " << t << ": " << "Do your own homework!" << endl;
		else if(HWDay<=D)
			cout << "Case " << t << ": " << "Yesss" << endl;
		else if(HWDay<=(D+5))
			cout << "Case " << t << ": " << "Late" << endl;
		else
			cout << "Case " << t << ": " << "Do your own homework!" << endl;
	
	}



	return 0;
}
