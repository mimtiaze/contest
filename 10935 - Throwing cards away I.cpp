#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<stack>
#include<sstream>
#include<queue>
#include<map>

using namespace std;

int main(){

	//freopen("output.txt", "w", stdout);

	int n;
	while(1){
		//cin >> n;
		scanf("%d",&n);
		if(n==0) break;

		queue <int> inputs;
		for(int i=1;i<=n;i++){
			inputs.push(i);
		}

		printf("Discarded cards:");
		while (inputs.size() > 1) {
			printf(" %d", inputs.front());
			inputs.pop();
			int x = inputs.front();
			inputs.pop();
			if (!inputs.empty())
				printf(",");
			inputs.push(x);
		}
		printf("\nRemaining card: %d\n", inputs.front());
	}
	return 0;
}
