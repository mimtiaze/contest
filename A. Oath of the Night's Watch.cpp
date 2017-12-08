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

using namespace std;

int main(){

	int n;
	vector<int > inputs;

	cin >> n;
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		inputs.push_back(temp);
	}

	sort(inputs.begin(),inputs.end());

	int max = inputs[0];
	int min = inputs[0];
	for(int i=0;i<n;i++){
		if(inputs[i]>max)
			max = inputs[i];
	}
	for(int i=0;i<n;i++){
		if(inputs[i]<min)
			min = inputs[i];
	}


	int counter = 0;
	for(int i=0;i<n;i++){
		if(inputs[i]==min || inputs[i]==max) 
			continue;
		counter++;
	}

	cout << counter << endl;


	return 0;
}
