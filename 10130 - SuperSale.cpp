#include<cstdio>
#include<ctime>
#include<algorithm>
using namespace std;
#define arSize 1001

int dp[35], weight[arSize],price[arSize], n, tc;

int main()
{
	/*freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);*/
	scanf("%d", &tc);
	//clock_t time_req;
	while (tc--){

		int i, j,p,w;
		scanf("%d", &n);
		//for (i = 0; i < 1005; i++)
		for (j = 0; j < 35; j++)
			dp[j] = 0;
		for (i = 0; i < n; i++){
			scanf("%d %d", &p,&w);
			for (j = 30; j >= w; j--)
				dp[j] = max(dp[j], dp[j - w] + p);
		}

		
		//time_req = clock();
		

		//time_req = clock() - time_req;
		//printf("%d\nTime taken=%f\n", F(0, 0, 0), (float)time_req / CLOCKS_PER_SEC);
		int temp,newtc;
		scanf("%d", &newtc);
		int sum = 0;
		for (int i = 0; i < newtc; i++){
			scanf("%d", &temp);
			int x = dp[temp];
			//printf("%d attempt = %d\n",i, x);
			sum += x;
		}
		printf("%d\n", sum);
		//printf("%d\n", F(0, 0, temp, 0));

	}

	return 0;
}