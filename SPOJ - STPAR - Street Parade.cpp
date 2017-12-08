#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main(){

	int t;
	
	while(1){
		
		cin >> t;
		if(t==0) break;

		vector <int> inputs;
		vector <int> outputs;
		stack <int> sideStreet;

		for(int i=0;i<t;i++){
			int temp;
			cin >> temp;
			inputs.push_back(temp);
		}

		int tracker = 1;
		for(int i=0;i<inputs.size();){
			if(inputs[i]==tracker){
				tracker++;
				outputs.push_back(inputs[i]);
				i++;
			}else{
				if(!sideStreet.empty()){
					int temp = sideStreet.top();
					if(temp==tracker){
						tracker++;
						outputs.push_back(temp);
						sideStreet.pop();
					}else{
						sideStreet.push(inputs[i]);
						i++;
					}
				}else{
					sideStreet.push(inputs[i]);
					i++;
				}

				//inputs.erase(inputs.begin()+i);
			}
		}

		while(!sideStreet.empty()){
			int temp = sideStreet.top();
			sideStreet.pop();
			outputs.push_back(temp);
		}

		tracker = 1;
		bool sorted=true;
		for(int i=0;i<outputs.size();i++){
			if(tracker==outputs[i]){
				tracker++;
			}else{
				sorted=false;
				break;
			}
		}

		if(sorted)
			cout << "yes" << endl;
		else
			cout << "no" << endl;

		
	}

	return 0;
}
