#include <iostream>

using namespace std;

const int N=50002;
int a[N],b[N],sizeOfA,sizeOfB;

bool check(int x){
	int p=1;
	int q=sizeOfA;

	while(q-p>1){
		int mid=(p+q)/2;
		if(a[mid]+x==10000)
			return true;
		if(a[mid]+x>10000)
			q=mid;
		else
			p=mid;
	}

	if(a[p]+x==10000 || a[q]+x==10000)
		return true;
	return false;
}

int main(){

	cin>>sizeOfA;
	for(int i=1;i<=sizeOfA;++i)
		cin>>a[i];

	cin>>sizeOfB;
	for(int i=1;i<=sizeOfB;++i)
		cin>>b[i];


	for(int i=1;i<=sizeOfB;++i)
		if(check(b[i])){
			cout<<"YES";
			return 0;
		}
	cout<<"NO";
	return 0;

}
