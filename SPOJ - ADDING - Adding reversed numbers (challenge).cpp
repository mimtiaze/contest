#include<bits/stdc++.h>
using namespace std;

template <typename T>
std::string NumberToString ( T Number )
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}

int StringToNumber ( string Text )
{
	stringstream ss(Text);
	int result;
	return ss >> result ? result : 0;
}


int main(){

    int t;

    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;


        string astr = NumberToString(a);
        string bstr = NumberToString(b);
        reverse(astr.begin(),astr.end());
        reverse(bstr.begin(),bstr.end());
        a = StringToNumber(astr);
        b = StringToNumber(bstr);
        int sum = a+b;
        string sumstr = NumberToString(sum);
        reverse(sumstr.begin(),sumstr.end());
        sum = StringToNumber(sumstr);
        cout << sum << endl;

    }

}
