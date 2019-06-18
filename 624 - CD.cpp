#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

#define maxx 40
int taken[maxx], cd[maxx], n, t, totalMin, maxArr[maxx];


int solve(int i, int passedMin){
	if (i == n){
		int sum = 0;
		for (int j = 0; j < n; j++){
			if (taken[j] == 1){
				sum += cd[j];
			}
		}
		if (maxArr[n] <= sum){
			for (int j = 0; j < n; j++) maxArr[j] = taken[j];
			maxArr[n] = sum;
		}
		return sum;
	}
	taken[i] = 0;
	int left = solve(i + 1, passedMin);
	taken[i] = 1;
	int right = (passedMin + cd[i] <= totalMin) ? solve(i + 1, passedMin + cd[i]) : 0;
	return max(left, right);
}

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("inputout.txt", "w", stdout);
	
	while (cin >> totalMin){
		cin >> n;
		for (int i = 0; i < maxx; i++){
			maxArr[i] = 0;
		}


		for (int i = 0; i < n; i++){
			cin >> cd[i];

		}
		int sum = solve(0, 0);
		//cout << sum << endl;
	
		for (int i = 0; i < n; i++){
			if (maxArr[i]) cout << cd[i] << " ";
		}
		cout << "sum:" << sum << endl;
	}

	return 0;
}