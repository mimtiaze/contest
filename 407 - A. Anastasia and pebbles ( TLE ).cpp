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

#define FOR(n) for(int i=0; i<n; i++)
#define inFIle freopen("input.txt", "r", stdin);
#define outFile freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int bin_search(vector<int> a,int search,int low,int high){
	int mid=(low+high)/2;
	
	if(low<=high){
		if(a[mid]==search)
			return mid;
		else if(a[mid]>search){
			high=mid-1;
			return bin_search(a,search,low,high);
		}
		else if(a[mid]<search){
			low=mid+1;
			return bin_search(a,search,low,high);
		}
	}
	else
		return -1;
}

int main(){

	int n;
	long long int k;
	cin >> n >> k;
	
	vector <int> input;

	FOR(n){
		int temp;
		cin >> temp;
		input.push_back(temp);
	}

	sort(input.begin(),input.end());

	int dayCounter = 0;

	while(input.size()!=0){
		int last = input[input.size()-1];
		if(last>=k*2){
			dayCounter++;
			input[input.size()-1] = last - k*2;
			
			if(input[input.size()-1]<=0)
				input.erase(input.begin()+(input.size()-1));
		}else{
			if(last>0){
				dayCounter++;
				input[input.size()-1] = last - k;

				if(input[input.size()-1]<=0)
					input.erase(input.begin()+(input.size()-1));

				for(int i=k;i>=0;i--){
					int res = bin_search(input,i,0,input.size()-1);
					if(res!=-1){
						input[res] = input[res] - k;

						if(input[res]<=0)
							input.erase(input.begin()+res);
						break;
					}
				}
			}else{
				input.erase(input.begin()+(input.size()-1));
			}

		}
	}

	cout << dayCounter << endl;

	return 0;
}
