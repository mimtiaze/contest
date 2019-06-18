#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int board[8][8];
bool col[8];
bool diag1[15];
bool diag2[15];
int seq[100];
int score, sum,serial,r,c;

void backtracking(int n){
	if (n == 8){
		//score = max(score, sum);
		if (board[r][c] == 1){
			int num = 0;
			int mul = 10000000;
			//printf("%2d      ", serial);
			for (int i = 0; i < 8; i++)
				for (int j = 0; j < 8; j++)
					if (board[j][i] == 1){
						//printf("%d ", j + 1);
						int t = (j + 1)*mul;
						num += t;
						mul /= 10;
					}
						//printf("%d ", j + 1);

			//printf("\n");
			seq[serial - 1] = num;
			serial++;
		}
		
		return;
	}

	for (int i = 0; i<8; i++)
		if (!col[i] && !diag1[n - i + 7] && !diag2[n + i]){
			col[i] = true;
			diag1[n - i + 7] = true;
			diag2[n + i] = true;
			board[n][i]=1;

			backtracking(n + 1);

			col[i] = false;
			diag1[n - i + 7] = false;
			diag2[n + i] = false;
			board[n][i]=0;
		}
}

int main(){
	/*freopen("input.txt", "r", stdin);
	freopen("inputout.txt", "w", stdout);*/

	int t;

	scanf("%d", &t);
	while (t--){
		memset(col, false, sizeof(col));
		memset(diag1, false, sizeof(diag1));
		memset(diag2, false, sizeof(diag2));
		serial = 1;
		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++)
				board[i][j]=0;

		//int r, c;
		scanf("\n%d %d", &r, &c);
		r--;
		c--;
		/*board[r][c] = 1;
		col[c] = true;
		diag1[c - r + 7] = true;
		diag2[c + r] = true;*/
		printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n", score);
		backtracking(0);
		sort(seq, seq + serial-1);

		for (int i = 0; i < serial - 1; i++){
			printf("%2d     ", i+1);
			int num = seq[i];
			int arr[8];
			int j = 7;
			while (num != 0){
				int x = num % 10;
				num /= 10;
				arr[j] = x;
				j--;
			}
			for (int j = 0; j < 8; j++){
				printf(" %d", arr[j]);
			}
			printf("\n");
		}
			//printf("%d %d\n",i, seq[i]);
		if (t!=0)
		printf("\n");
	}

	return 0;
}