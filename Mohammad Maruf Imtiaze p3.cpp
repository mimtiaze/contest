#include<iostream>
#include<cstdio>

using namespace std;

int n, z, A[10000];
int grid[200][300];
int c, k;
int maxxx;


int countZero(int i){
    int cnt = 0;
    for (int j = 0; j < c; j++){
        if (grid[i][j] == 0) cnt++;
    }
    return cnt;
}

int checkPossibility(int zr){
    /*if (zr == k) return 1;
    if (zr > k) return 0;
    if ((zr % 2) == (k % 2)) return 1;
*/
    
    //return 0;

    return ((k - zr) % 2 == 0 && k >= zr);
}

int checkSame(int ik){
    int same = 0;
    for (int i = 0; i < n; i++){
            int matched = 1;
            for (int j = 0; j < c; j++){
                if (grid[ik][j] != grid[i][j]){
                    matched = 0;
                    break;
                }
            }
            if (matched) same++;
        
    }
    return same;

}

void solve(){
    for (int i = 0; i < n; i++){
        int zero = countZero(i);
        int ck = 0;
        if(zero) ck = checkPossibility(zero);
        else{
            int t = checkSame(i);
            if (t>maxxx) maxxx = t;
        }
        if (ck){
            int t = checkSame(i);
            if (t>maxxx) maxxx = t;
        }
    }
}

void read(){
    maxxx = 0;
    scanf("\n%d %d %d", &n, &c, &k);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &grid[i][j]);

}
int main(){

    freopen("input.txt", "r", stdin);
    int t,test = 1;
    scanf("%d", &t);
    while (t--){
       
        read();
        solve();
        printf("#%d %d\n", test++, maxxx);
    }

    
    
    return 0;
}