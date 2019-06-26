#include<cstdio>

#pragma warning(disable:4996)

int A[100];
int v[100];
int N;
int ballon[20];
int scores[20];
int mmax;


void print(){
    int i;
    printf("{");
    for (i = 0; i<N-1; i++){
        printf("%d, ", A[i]);

    }
    printf("%d},\n",A[N]);

    return;
}


void solve(int i, int scr){
    int j;
    if (i == N){
        //print();
        if (mmax < scr) mmax = scr;
        return;
    }

    for (j = 0; j<N; j++){
        if (v[j] == 0){
            A[i] = j;

            v[j] = 1;

            int tscore = scr;
            int t1, t2;
            t1 = t2 = 1;
            for (int k = j + 1; k < N; k++){
                if (v[k] == 0){
                    t1 = scores[k];
                    break;
                }
            }
            for (int k = j - 1; k >= 0; k--){
                if (v[k] == 0){
                    t2 = scores[k];
                    break;
                }
            }
            scr += t1*t2;
            solve(i + 1,scr);

            scr = tscore;
            v[j] = 0;
        }
    }

}

void takeInput(){
    

}

int main(){

    //freopen("out.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    int t, test = 1;
    scanf("%d", &t);
    while (t--){

        //N = 7;
        mmax = -1;
        scanf("%d", &N);
        for (int i = 0; i < N; i++){
            scanf("%d", &scores[i]);
        }
        
        solve(0,0);
        printf("#%d %d\n", test, mmax-1);


        test++;
    }
    /*N = 3;
    solve(0);*/
    return 0;
}