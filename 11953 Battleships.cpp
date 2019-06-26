#include<cstdio>

int M, N;
char grid[101][101];
int Ans;

void solve(int x, int y){
    grid[x][y] = '.';
    if ((x - 1) >= 0 && (grid[x - 1][y] == '@' || grid[x - 1][y] == 'x'))
        solve(x - 1, y);

    if ((y - 1) >= 0 && (grid[x][y - 1] == '@' || grid[x][y - 1] == 'x'))
        solve(x, y - 1);
    if ((y + 1) < N && (grid[x][y + 1] == '@' || grid[x][y + 1] == 'x'))
        solve(x, y + 1);

    if ((x + 1) < M && (grid[x + 1][y] == '@' || grid[x + 1][y] == 'x'))
        solve(x + 1, y);
}

void solvecase(){
    int i, j;
    Ans = 0;
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            if (grid[i][j] == 'x'){
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

    int t,test=1;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &M);
        //if (M == 0) break;
        N = M;
        readcase();
        solvecase();
        printf("Case %d: %d\n", test++, Ans);
    }


    return 0;
}