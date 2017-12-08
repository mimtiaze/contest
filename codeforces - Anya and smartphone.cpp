#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<stack>
#include<sstream>
#include<queue>
#include<map>
#include<cstdio>

using namespace std;

int main(){

	int n, m, k;
	long long ans = 0;

	int app[100005];
	int pos[100005];

	scanf("%d %d %d",&n,&m,&k);

	for (int i=0;i<n;i++){
		int tmp;
		scanf("%d",&tmp);
		app[tmp]=i;
		pos[i]=tmp;
	}

	for (int i=0;i<m;i++){
		int target,tmp;
		scanf("%d",&target);
		ans+=app[target]/k+1;
		tmp=app[target];
		if (tmp>0){
			swap(app[pos[tmp]],app[pos[tmp-1]]);
			swap(pos[tmp],pos[tmp-1]);
		}
	}

	printf("%lld\n",ans);
	return 0;
}