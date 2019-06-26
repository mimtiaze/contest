#include<cstdio>

int M, N;
char grid[501][501];
char tempo[501][501];
int Ans;

void solve(int x, int y){
    if (x == (N - 1) && grid[x][y] == 'b'){
        Ans = 1;
        return;
    }
    grid[x][y] = '.';


    if ((x - 1) >= 0 && (y - 1) >= 0 && grid[x - 1][y - 1] == 'b')
        solve(x - 1, y - 1);
    if ((x - 1) >= 0 && grid[x - 1][y] == 'b')
        solve(x - 1, y);


    if ((y - 1) >= 0 && grid[x][y - 1] == 'b')
        solve(x, y - 1);
    if ((y + 1) < N && grid[x][y + 1] == 'b')
        solve(x, y + 1);

    if ((x + 1) < M && grid[x + 1][y] == 'b')
        solve(x + 1, y);
    if ((x + 1) < M && (y + 1) < N && grid[x + 1][y + 1] == 'b')
        solve(x + 1, y + 1);

}

void solvecase(){
    int i, j;
    Ans = 0;
    for (i = 0; i < M; i++){
        if (grid[0][i] == 'b'){
            solve(0, i);
            if (Ans == 1) break;

            for (int ik = 0; ik < M; ik++){
                for (int jk = 0; jk < N; jk++){
                    grid[ik][jk] = tempo[ik][jk];
                }
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
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            tempo[i][j] = grid[i][j];
        }
    }

}
int main(){

    //freopen("input.txt", "r", stdin);
    int t=1;
    while ((scanf("%d", &M)) == 1){
        if (M == 0) break;
        N = M;
        readcase();
        solvecase();
        if (Ans==1)
            printf("%d B\n", t++);
        else
            printf("%d W\n", t++);
    }


    return 0;
}