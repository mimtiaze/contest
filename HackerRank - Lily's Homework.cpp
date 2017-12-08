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
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
#define sinc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){

	int n;
	//long long int arr[100000+10],tempArray[100000+10];
	vector<long long int > arr,arr2,sortedArray,reverseArray;

	cin >> n;
	FOR(n){
		long long int temp;
		cin >> temp;

		arr.push_back(temp);
		arr2.push_back(temp);
		sortedArray.push_back(temp);
		reverseArray.push_back(temp);
	}

	sort(sortedArray.begin(),sortedArray.end());
	sort(reverseArray.begin(),reverseArray.end());
	reverse(reverseArray.begin(),reverseArray.end());
	
	int swap1 = 0;
	int swap2 = 0;

	map<long long int, int> tempMAP;
	FOR(n){
		tempMAP[arr[i]] = i;
	}

	FOR(n){
		if(arr[i]!=sortedArray[i]){
			int pos = tempMAP[sortedArray[i]];
			long long int temp = arr[i];
			arr[i] = arr[pos];
			arr[pos] = temp;
			tempMAP[arr[pos]] = pos;
			swap1++;
		}
	}

	map<long long int, int> tempMAP2;
	FOR(n){
		tempMAP2[arr2[i]] = i;
	}

	FOR(n){
		if(arr2[i]!=reverseArray[i]){
			int pos = tempMAP2[reverseArray[i]];
			long long int temp = arr2[i];
			arr2[i] = arr2[pos];
			arr2[pos] = temp;
			tempMAP2[arr2[pos]] = pos;
			swap2++;
		}
	}

	if(swap1<swap2)
		cout << swap1 << endl;
	else
		cout << swap2 << endl;



	return 0;
}
