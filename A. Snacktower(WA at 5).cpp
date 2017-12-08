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

using namespace std;

int main(){

	int n;
	vector<int > inputs;
	stack<int > outputs;
	queue <int> another;

	cin >> n;
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		inputs.push_back(temp);
	}

	int prev,current,towerSize = n;
	for(int i=0;i<n;i++){

		if(outputs.empty()){
			outputs.push(inputs[i]);
			//cout << endl;
		}else if(outputs.top()>inputs[i] && abs(outputs.top()-inputs[i])!=1){
			
			while(!outputs.empty()){
				cout << outputs.top() <<  " " ;
				outputs.pop();
			}
			cout << endl;
			outputs.push(inputs[i]);
		}else if(outputs.top()<inputs[i]){
			outputs.push(inputs[i]);
			//if(abs(outputs.top()-inputs[i])!=1)
				cout << endl;
		}else{
			another.push(inputs[i]);
			//outputs.push(inputs[i]);
		}
	}

	//outputs.push(inputs[n-1]);
	while(!outputs.empty()){
		cout << outputs.top() <<  " " ;
		outputs.pop();
	}
	cout << endl;

	while(!another.empty()){
		cout << another.front() <<  " " ;
		another.pop();
	}
	cout << endl;
	

	return 0;
}
