#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

#define row 30
int input[row][5], n,r,c,sr,sc;
int A[100];
int v[100];
int pathlen;


int calculateCost(int fr,int fc, int er,int ec){
	return abs(fr - er) + abs(fc - ec);
}

void calc(){
	int i;
	int total = 0;
	int tr = sr, tc = sc;
	for (i = 0; i<n; i++){
		int x = A[i];
		total += calculateCost(tr, tc, input[x][0], input[x][1]);
		tr = input[x][0];
		tc = input[x][1];
	}
	total += calculateCost(tr, tc, sr, sc);
	pathlen = min(pathlen, total);

	return;
}

void solve(int i){
	int j;
	if (i == n){
		calc();
		return;
	}

	for (j = 0; j<n; j++){
		if (v[j] == 0){
			A[i] = j;
			v[j] = 1;
			solve(i + 1);
			v[j] = 0;
		}
	}

}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("inputout.txt", "w", stdout);

	int t;
	scanf("%d", &t);
	while (t--){
		pathlen = 9999999;
		scanf("%d %d", &r, &c);
		scanf("%d %d", &sr, &sc);
		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			scanf("%d %d", &input[i][0], &input[i][1]);
		}
		//sorting();
		solve(0);
		printf("The shortest path has length %d\n", pathlen);

	}

	return 0;
}