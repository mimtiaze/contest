#include<iostream>
#include<cstdio>
#include<ctime>
#include<algorithm>

using namespace std;

#define size 110

int budget, n, price[size], favour[size],dp[105][20005];

int solve(int i,int spent){
	if (i == n){
		if (spent <= budget) return 0;
		else if (spent > 2000 && spent <= budget + 200) return 0;
		else return -2000;
	}

	if (dp[i][spent] != -1) return dp[i][spent];

	int t1 = solve(i + 1, spent);
	int t2 = -2000;
	if (spent + price[i] <= budget + 200)
		t2 = favour[i] + solve(i + 1, spent + price[i]);

	return dp[i][spent] = max(t1,t2);
}


int main(){

	/*freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);*/
	clock_t time_req;
	float tt = -100;
	while ((scanf("%d %d",&budget,&n))==2){
		time_req = clock();
		for (int i = 0; i < n; i++){
			scanf("%d %d", &price[i], &favour[i]);
		}
		for (int i = 0; i < 105; i++)
			for (int j = 0; j < 20005; j++)
				dp[i][j] = -1;

		printf("%d\n", solve(0, 0));
		time_req = clock() - time_req;
		float temp = (float)time_req / CLOCKS_PER_SEC;
		if (temp>tt) tt = temp;
		//printf("Time taken=%f\n",(float)time_req / CLOCKS_PER_SEC);
	}
	
	
	//printf("Time taken=%f\n", tt);

	return 0;
}