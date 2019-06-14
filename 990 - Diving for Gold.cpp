#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

#define maxx 40
int taken[maxx], depth[maxx], gold[maxx], diveCosts[maxx], n,t,w,countt,finalArr[maxx][maxx],maxArr[maxx];


int solve(int i, int oxy){
	if (i == n){
		int sum = 0;
		countt = 0;
		for (int j = 0; j < n; j++){
			if (taken[j]==1){
				sum += gold[j];
			} 
		}
		if (maxArr[n] < sum){
			for (int j = 0; j < n; j++) maxArr[j] = taken[j];
			maxArr[n] = sum;
		}
		return sum;
	}
	taken[i] = 0;
	int left = solve(i + 1, oxy);
	taken[i] = 1;
	int right = (oxy>=diveCosts[i]) ? solve(i + 1, oxy - diveCosts[i]) : 0;
	return max(left, right);
}

int main(){

	freopen("input.txt", "r", stdin);

	int first = 1;
	while ((scanf("%d %d",&t,&w))==2){
		scanf("%d", &n);
		for (int i = 0; i < maxx; i++){
			for (int j = 0; j < maxx; j++){
				finalArr[i][j] = 0;
				taken[i] = 0;
			}
		}

		for (int i = 0; i < n; i++){
			scanf("%d %d", &depth[i], &gold[i]);
			diveCosts[i] = 3 * w*depth[i];
		}


		(first == 0) ? printf("\n") : first = 0;

		int res = solve(0, t);
		printf("%d\n", res);
		countt = 0;
		for (int i = 0; i < n; i++){
			//cout << i << "----------" << maxArr[i] << endl;
			if (maxArr[i])
				countt++;
		}
		printf("%d\n", countt);

		for (int i = 0; i < n; i++){
			if (maxArr[i]){
				printf("%d %d\n", depth[i], gold[i]);
			}	
		}
	}


	return 0;
}