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
#include<climits>
#include<map>
#include <set>
#include <cassert>
#include <numeric>
#include <bitset>

#define FOR(n) for(int i=0; i<n; i++)
#define inFIle freopen("input.txt", "r", stdin);
#define outFile freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;


int main(){

	

	int n,m,k;

	//cin >> n >> m >> k;
	//int hole[1000000+100];
	scanf("%d %d %d",&n,&m,&k);
	bitset<1000000> hole;

	FOR(m){
		int temp;
		cin >> temp;
		hole[temp] = 1;
	}


	int bonePos = 1;
	bool bonePosFixed = false;

	FOR(k){
		int u,v;
		//cin >> u >> v;
		scanf("%d %d",&u,&v);	

		if(!bonePosFixed){
			if(hole[bonePos]==1)
				break;

			if(bonePos == u){
				bonePos = v;
			}
			else if(bonePos == v){
				bonePos = u;
				
			}
		}

	}

	cout << bonePos << endl;

	return 0;
}
