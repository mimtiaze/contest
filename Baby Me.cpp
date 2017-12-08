#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string s;
	int t, a, b, test_case = 1;

	cin >> t;

	while (t--) {
		cin >> a;

		getline(cin,s);

		if(s.length() > 3)
			b = s[3] - '0';
		else
			b = 0;

		float ans=a*0.5+b*0.05;

		stringstream ss;
		string sstemp;

		ss << ans;
		sstemp=ss.str();

		cout << "Case " << test_case++ << ": " << sstemp << endl;
	}

	return 0;
}