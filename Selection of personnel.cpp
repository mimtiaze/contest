#include<cstdio>
#include<iostream>
#include<algorithm>


using namespace std;
long long arr[1000][1000];

long long combinatorics(long long a, long long b){
	if(a==b)
		arr[a][b]=1;
	if(b==0)
		arr[a][b]=1;
	if(b==1)
		arr[a][b]=a;

	if(arr[a][b]==-1){		
		arr[a][b]=combinatorics(a-1,b-1)+combinatorics(a-1,b);
	}

	return arr[a][b];
}

int main(){

	long long a;
	while(true){
		if(!(cin >> a)) break;
		
		for(long long i=0;i<1000;i++)
			for(long long j=0;j<1000;j++)
				arr[i][j]=-1;

		long long ans=combinatorics(a,5)+combinatorics(a,6)+combinatorics(a,7);
		cout << ans << endl ;
	
	}

	return 0;
}
