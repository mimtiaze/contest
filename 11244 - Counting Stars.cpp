#include<cstdio>

int M, N;
char grid[101][101];
int Ans;
int l;

void solve(int x, int y){
    l++;
    grid[x][y] = '.';
    if ((x - 1) >= 0 && (y - 1) >= 0 && grid[x - 1][y - 1] == '*')
        solve(x - 1, y - 1);
    if ((x - 1) >= 0 && grid[x - 1][y] == '*')
        solve(x - 1, y);
    if ((x - 1) >= 0 && (y + 1) < N && grid[x - 1][y + 1] == '*')
        solve(x - 1, y + 1);


    if ((y - 1) >= 0 && grid[x][y - 1] == '*')
        solve(x, y - 1);
    if ((y + 1) < N && grid[x][y + 1] == '*')
        solve(x, y + 1);


    if ((x + 1) < M && (y - 1) >= 0 && grid[x + 1][y - 1] == '*')
        solve(x + 1, y - 1);
    if ((x + 1) < M && grid[x + 1][y] == '*')
        solve(x + 1, y);
    if ((x + 1) < M && (y + 1) < N && grid[x + 1][y + 1] == '*')
        solve(x + 1, y + 1);

}

void solvecase(){
    int i, j;
    Ans = 0;
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            if (grid[i][j] == '*'){
                l = 0;
                solve(i, j);
                if (l == 1) Ans++;
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

    while ((scanf("%d %d", &M, &N)) == 2){
        if (M == 0 && N == 0) break;
        readcase();
        solvecase();
        printf("%d\n", Ans);
    }


    return 0;
}