#include<cstdio>
#include<string>
#include<vector>
#include<iostream>

using namespace std;
int arr[110];

int main(){

    int n;
    cin >> n;
    //vector<int > numbers;

    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        //numbers.push_back(temp);
        arr[i]=temp;
    }

	int maxO=0;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=i;j--){
			int count=0;
			for(int x=i;x<=j;x++){
				if(arr[x]==0){
					count++;
				}else{
					count--;
				}
			}

			for(int x=0;x<i;x++){
				if(arr[x]==1)
					count++;
			}

			for(int x=n-1;x>j;x--){
				if(arr[x]==1)
					count++;
			}

			if(count>maxO)
				maxO=count;
		}
	}

	cout << maxO << endl;

    return 0;
}