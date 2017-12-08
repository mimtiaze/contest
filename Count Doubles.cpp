#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
		
	int t;
	cin >> t;
	vector <int > v;

	while(t--){
		v.clear();

		int n;
		cin >> n;

		for(int i=0;i<n;i++){
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		sort(v.begin(),v.end());

		int counter=0,temp=0;

		for(int i=n-1;i>=0;i--){
			for(int j=i-1;j>=0;j--){
				if(v[i]%2==0){
					temp=v[i]/2;
					if(temp==v[j])
						counter++;
				}
			}
		}

		cout << counter << endl;
	
	}

	return 0;
}