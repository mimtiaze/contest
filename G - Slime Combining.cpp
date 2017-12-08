#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int n;
	vector <int> num;

	while(cin >> n){

		num.clear();
		
		for(int i=0;i<n;i++)
			num.push_back(1);

		for(int i=1;i<num.size();i++){
			if(num[i]==num[i-1]){
				num[i-1]++;
				num.erase(num.begin() +i);
				i=0;
			}
		}

		if(n>0){
			for(int i=0;i<num.size();i++){
				cout << num[i] << " ";
			}
		}
		else
			cout << 0;
		cout << endl;

	}

	return 0;
}