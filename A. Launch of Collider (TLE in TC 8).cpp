#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>


using namespace std;

int main(){

	int n;
	string direction;
	vector <long long > inputs;

	cin >> n;
	cin >> direction;

	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		inputs.push_back(temp);
	}

	sort(inputs.begin(),inputs.end());

	long long maxDistance=0;

	for(int i=0;i<n-1;i++){
		if((inputs[i+1]-inputs[i])>maxDistance){
			maxDistance=inputs[i+1]-inputs[i];
		}

	}

	bool collapse=false;
	long long timer=1; 

	while(timer<maxDistance){
		for(int i=0;i<n;i++){
			if(direction[i]=='L'){
				inputs[i]--;
			}
			else if(direction[i]=='R'){
				inputs[i]++;
			}
		}

		for(int i=0;i<n-1;i++){
			if(inputs[i]==inputs[i+1]){
				collapse=true;
				break;
			}
		}

		if(collapse)
			break;

		timer++;
	}

	if(timer==maxDistance)
		timer=-1;

	cout << timer << endl;

	return 0;
}