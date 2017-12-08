#include <bits/stdc++.h>
using namespace std;
#define inFile freopen("input.txt", "r", stdin);
#define outFile freopen("output.txt", "w", stdout);

template <typename T>
std::string NumberToString ( T Number )
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}


long long int StringToNumber ( string Text )
{
	stringstream ss(Text);
	long long int result;
	return ss >> result ? result : 0;
}

string evenlength(string n)
{

	string res = n;


	for (int j = n.length() - 1; j >= 0; --j)
		res += n[j];

	return res;
}


int main()
{
    outFile;
    long long int sum = 0;
    cout << "arr[]={ " ;
    for(int i=1;i<=100000;i++)
    {
        string n = NumberToString(i);
        long long int a = StringToNumber(evenlength(n));
        cout << a << ", ";
        sum+=a;
        //cout << "arr[" << i << "]=" << a << endl;

    }
    cout << "};" << endl;
    cout << sum << endl;

	return 0;
}
