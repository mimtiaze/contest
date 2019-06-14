#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;
int n, totals[100],sum;
int dp[2100][2100];

int solve(int i,int load1){
	if (i > n) return 0;
	if (sum / 2 == load1) return 1;

	if (dp[i][load1] != -1) return dp[i][load1];
	int ans = 0;
	ans = ans | solve(i + 1, load1);
	ans = ans | solve(i + 1, load1 + totals[i]);
	return dp[i][load1] = ans;
	
}


int main(){

	//freopen("input.txt", "r", stdin);

	int t;
	scanf("%d", &t);

	while (t--){
		sum = 0;
		int temp;
		char ch;
		int c=0;
		int n1, n2;
		n1 = n2 = 0;
		for (int i = 0; i < 100; i++) totals[i] = 0;
		for (int i = 0; i < 2100; i++)
			for (int j = 0; j < 2100; j++)
				dp[i][j] = -1;


		while ((scanf("%d", &temp)) == 1){
			sum += temp;
			totals[c] = temp;
			c++;

			if ((scanf("%c", &ch)) == EOF) break;
			if (ch == '\n') break;
				
		}
		n = c;

		if (sum % 2 != 0) printf("NO\n");
		else{
			int tp = solve(0, 0);
			if (tp)	printf("YES\n");
			else	printf("NO\n");
		}	
	}

	return 0;
}