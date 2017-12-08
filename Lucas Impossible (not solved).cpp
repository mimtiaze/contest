#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int > sum;

void summetion(vector<int > v){
	if(v.size()==2){
		sum.push_back(v[0]+v[1]);
		return;
	}

	int sumInFunction=0;
	for(int i=0;i<v.size();i++){
		sumInFunction+=v[i];
	}
	sum.push_back(sumInFunction);

	
	
	for(int i=0;i<v.size();i++){
		vector<int > v1=v;
		v1.erase(v1.begin()+i);
		summetion(v1);
	}

	return;
}


int main() {
    
	int n;
	vector<int > numbers;
	
	cin >> n;

	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		numbers.push_back(temp);
	}
	
	summetion(numbers);

	sort(sum.begin(),sum.end());

	int missing=sum[0]+1;
	for(int i=0;i<sum.size()-1;i++){
		if((sum[i]+1)!=sum[i+1])
			missing=sum[i]+1;
	}

	cout << missing << endl;

    return 0;
}
