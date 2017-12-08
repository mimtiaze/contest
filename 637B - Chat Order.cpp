#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<map>

using namespace std;

template <typename T1, typename T2>
struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
		return a.second > b.second;
    }
};



int main(){

	map<string, int> mymap;
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		string temp;
		cin >> temp;
		mymap[temp]=i;
	}

	vector<pair<string, int> > mapcopy(mymap.begin(), mymap.end());
	sort(mapcopy.begin(), mapcopy.end(), less_second<string, int>());

	for (vector<pair<string,int>>::iterator it=mapcopy.begin(); it!=mapcopy.end(); ++it)
		cout << it->first << endl;
	 
	return 0;
}
