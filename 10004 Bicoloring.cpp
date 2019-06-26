#include<cstdio>

int n, l;
int grid[220][220];
int color[220];
int Ans;

int fillcolor(int i, int c){
    if (color[i] == 0)
        color[i] = c;
        //return 1;
    else if (color[i] == c)
        return 1;
    else
        return 0;
    for (int j = 0; j < n; j++){
        if (grid[i][j]){
            if (fillcolor(j, 3 - c) == 0){
                return 0;
            }
        }
    }

    return 1;
}
void solvecase(){
    Ans = fillcolor(0, 1);
}


void printcase(){
    if (Ans)
        printf("BICOLORABLE.\n");
    else
        printf("NOT BICOLORABLE.\n");
}


void init(){
    for (int i = 0; i < 220; i++){
        color[i] = 0;
        for (int j = 0; j < 220; j++){
            grid[i][j] = 0;
        }
    }
}
void readcase(){
    
    scanf("%d", &l);
    for (int i = 0; i < l; i++){
        int f, e;
        scanf("%d %d", &f, &e);
        grid[f][e] = grid[e][f] = 1;
    }

}
int main(){
    //freopen("input.txt", "r", stdin);
    while (scanf("%d", &n) == 1){
        if (n == 0) break;

        init();
        readcase();
        solvecase();
        printcase();
    }

    return 0;
}