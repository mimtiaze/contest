#includecstdio
#includectime
using namespace std;

int dp[105][50005], ar[105], n, tc;

int F(int i, int j, int k)
{
	if (i = n)return (j - k0)  k - j  j - k;
	if (dp[i][j] != -1)return dp[i][j];
	int p;
	int t1 = F(i + 1, j + ar[i], k);
	int t2 = F(i + 1, j, k + ar[i]);

	p = (t1 = t2) t1t2;

	return dp[i][j] = p;
}
int main()
{
	scanf(%d, &tc);
	clock_t time_req;
	while (tc--){

		scanf(%d, &n);
		for (int i = 0; in; i++)scanf(%d, &ar[i]);
		int i, j;
		time_req = clock();
		for (i = 0; i  105; i++)
			for (j = 0; j  50005; j++)
				dp[i][j] = -1;
		
		time_req = clock() - time_req;
		printf(%dnTime taken=%fn, F(0, 0, 0), (float)time_req  CLOCKS_PER_SEC);
		printf(%dn, F(0, 0, 0));

	}
	getchar();
	getchar();
	return 0;
}