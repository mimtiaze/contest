#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

#define row 30
int input[row][5], n, r, c, sr, sc;
int A[100];
int optimizePath[100];
int v[100];
double pathlen;


double calculateCost(int fr, int fc, int er, int ec){
	return (double)sqrt((double)pow(fr - er, 2) + (double)pow(fc - ec, 2));
}

void calc(){
	int i;
	double total = 0;
	for (i = 0; i<n-1; i++){
		total += calculateCost(input[A[i]][0], input[A[i]][1], input[A[i+1]][0], input[A[i+1]][1]);
		total += 16;
	}
	if (total < pathlen){
		for (i = 0; i < n; i++){
			optimizePath[i] = A[i];
		}
		pathlen = total;
	}

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

	int t = 1;
	while (1){
		scanf("%d", &n);
		if (n == 0) break;
		pathlen = 9999999.00;
		for (int i = 0; i < n; i++){
			scanf("%d %d", &input[i][0], &input[i][1]);
		}
		//sorting();
		solve(0);

		printf("**********************************************************\n");
		printf("Network #%d\n", t);
		for (int i = 0; i<n - 1; i++){
			double t = calculateCost(input[optimizePath[i]][0], input[optimizePath[i]][1],
				input[optimizePath[i + 1]][0], input[optimizePath[i + 1]][1]);
			t += 16;
			printf("Cable requirement to connect (%d,%d) to (%d,%d) is %.2lf feet.\n", 
				input[optimizePath[i]][0], input[optimizePath[i]][1],
				input[optimizePath[i + 1]][0], input[optimizePath[i + 1]][1], t);
		}

		printf("Number of feet of cable required is %0.2lf.\n", pathlen);




		t++;
	}

	return 0;
}