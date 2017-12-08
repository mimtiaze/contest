#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
//#include<algorithm>

using namespace std;

int main(){

    int t;
	vector <int > input;
	vector <int > output;

	while(1){
		cin >> t;

		input.clear();
		output.clear();

		if(t==0)
			break;

		for(int i=0;i<t;i++){
			int temp;
			cin >> temp;
			input.push_back(temp);
		}

		for(int i=1;i<t;i++){
			int diff=input[i]-input[i-1];

			for(int j=0;j<=diff;j++){
				output.push_back(i);
			}
		}

		for(int i=0;i<(output.size());i++){
			cout << output[i] << " ";
		}





		
	}

    return 0;
}
