#include<iostream>
#include<cstdio>

using namespace std;

int n, z, A[10000];

void solve(int i,int c){
	if (i == n){
		if (c == z){
			for (int j = 0; j < n; j++){
				printf("%d", A[j]);
			}
			printf("\n");
		}
		
		return;
	}

	for (int j = 0; j < 2; j++){
		A[i] = j;
		if (j == 1)	solve(i + 1, c + 1);
		else solve(i + 1, c);
	}
}

int main(){
	
	//freopen("input.txt", "r", stdin);
	int t;
	scanf("%d", &t);
	while (t--){
		scanf("\n%d %d", &n,&z);
		solve(0,0);
		if(t!=0)	printf("\n");
	}

	return 0;
}