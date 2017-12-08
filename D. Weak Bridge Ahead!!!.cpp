#include<cstdio>
#include<iostream>
#include<queue>

using namespace std;

int main(){

	int t;
	scanf("%d",&t);

	for(int testCase=1;testCase<=t;testCase++){
		int M,N;
		scanf("%d %d",&M,&N);

		queue<int> MQueue;
		queue<int> NQueue;

		for(int i=0;i<M;i++){
			int temp;
			scanf("%d",&temp);
			MQueue.push(temp);
		}

		for(int i=0;i<N;i++){
			int temp;
			scanf("%d",&temp);
			NQueue.push(temp);
		}

		int total=0;
		for(int i=0;i<(MQueue.size()+NQueue.size());i++){

			if(MQueue.empty){
				int numN=NQueue.front();
				total+=numN;
				NQueue.pop();
				continue;
			}
			if(NQueue.empty){
				int numM=MQueue.front();
				total+=numM;
				MQueue.pop();
				continue;
			}

			int numM=MQueue.front();
			int numN=NQueue.front();

			if(numM<numN){
				total+=numM;
				MQueue.pop();
			}else if(numM>numN){
				total+=numN;
				NQueue.pop();
			}else if(numM==numN){
				total+=numM;
				MQueue.pop();
			}
		}

		printf("Case %d: %d\n",testCase,total);

	}

	return 0;
}