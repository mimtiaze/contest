#include<cstdio>

int M, N;
int testCase;
char grid[101][101];
int Ans;

void solve(int x, int y){
	grid[x][y] = '0';
	if ((x - 1) >= 0 && (y - 1) >= 0 && grid[x - 1][y - 1] == '1')
		solve(x - 1, y - 1);
	if ((x - 1) >= 0 && grid[x - 1][y] == '1')
		solve(x - 1, y);
	if ((x - 1) >= 0 && (y + 1) < N && grid[x - 1][y + 1] == '1')
		solve(x - 1, y + 1);


	if ((y - 1) >= 0 && grid[x][y - 1] == '1')
		solve(x, y - 1);
	if ((y + 1) < N && grid[x][y + 1] == '1')
		solve(x, y + 1);


	if ((x + 1) < M && (y - 1) >= 0 && grid[x + 1][y - 1] == '1')
		solve(x + 1, y - 1);
	if ((x + 1) < M && grid[x + 1][y] == '1')
		solve(x + 1, y);
	if ((x + 1) < M && (y + 1) < N && grid[x + 1][y + 1] == '1')
		solve(x + 1, y + 1);

}

void solvecase(){
	int i, j;
	Ans = 0;
	for (i = 0; i < M; i++){
		for (j = 0; j < N; j++){
			if (grid[i][j] == '1'){
				Ans++;
				solve(i, j);
			}
		}
	}
}

void readcase(){
	//scanf("%d %d", &M,&N);
	int i;
	for (i = 0; i < M; i++){
		scanf("%s", grid[i]);
	}
}
int main(){

	//freopen("input.txt", "r", stdin);
	testCase = 1;
	while ((scanf("%d", &M)) == 1){
		N = M;
		readcase();
		solvecase();
		printf("Image number %d contains %d war eagles.\n", testCase, Ans);
		testCase++;
	}


	return 0;
}