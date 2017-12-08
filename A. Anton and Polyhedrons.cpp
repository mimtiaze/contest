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

	int t;
	cin >> t;

	int value = 0;

	while(t--){
		string temp;
		cin >> temp;

		if(temp == "Tetrahedron") value+=4;
		else if(temp == "Cube") value+=6;
		else if(temp == "Octahedron") value+=8;
		else if(temp == "Dodecahedron") value+=12;
		else if(temp == "Icosahedron") value+=20;
		
	}

	cout << value << endl;

	return 0;
}
