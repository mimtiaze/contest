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

struct schedule
{
	int start;
	int end;
};

bool compareStart(const schedule &a, const schedule &b)
{
	return a.start > b.start;
}

bool compareEnd(const schedule &a, const schedule &b)
{
	return a.end < b.end;
}

int main(){

	vector <schedule> chessClass;
	vector <schedule> programmingClass;
	
	int chessClassTest;
	int programmingClassTest;

	cin >> chessClassTest;

	for(int i=0;i<chessClassTest;i++){
		int temp1,temp2;
		cin >> temp1 >> temp2;

		schedule st;
		st.start = temp1;
		st.end = temp2;
		chessClass.push_back(st);

	}

	cin >> programmingClassTest;

	for(int i=0;i<programmingClassTest;i++){
		int temp1,temp2;
		cin >> temp1 >> temp2;

		schedule st;
		st.start = temp1;
		st.end = temp2;
		programmingClass.push_back(st);

	}

	sort(chessClass.begin(),chessClass.end(),compareEnd);
	sort(programmingClass.begin(),programmingClass.end(),compareStart);


	int diff1 = programmingClass[0].start - chessClass[0].end;

	sort(chessClass.begin(),chessClass.end(),compareStart);
	sort(programmingClass.begin(),programmingClass.end(),compareEnd);

	int diff2 = chessClass[0].start - programmingClass[0].end;

	if(diff1<0 && diff2<0)
		cout << "0" << endl;
	else if(diff1>diff2)
		cout << diff1 << endl;
	else if(diff2>diff1)
		cout << diff2 << endl;
	else if(diff1==diff2)
		cout << diff1 << endl;
	


	

	return 0;
}
