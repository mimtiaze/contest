#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b){
    if(b==0)
		return a;
    
	return gcd(b,a%b);
}

int main(){

    int t;
    cin >> t;

	vector<int > inputs;

    while(t--){

		inputs.clear();

        int n;
        cin >> n;
        for(int i=0; i<n; i++){
			int temp;
            cin >> temp;

			inputs.push_back(temp);
        }

		int ans=0;

		for(int i=0;i<inputs.size();i++){
			ans=gcd(inputs[i],ans);
		}

        if(ans==1)
			cout << "YES" << endl;
        else
			cout << "NO" << endl;
    }

    return 0;
}