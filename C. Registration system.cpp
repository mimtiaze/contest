#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<stack>
#include<queue>
#include<sstream>
#include<map>

using namespace std;

template <typename T>
  std::string NumberToString ( T Number )
  {
     std::ostringstream ss;
     ss << Number;
     return ss.str();
  }

int main(){

	int t;
	cin >> t;

	map <string, int> list;
	vector <string> outputs;

	for(int i=0;i<t;i++){
		string temp;
		cin >> temp;

		if(list.find(temp)==list.end()){
			list[temp] = 1;
			outputs.push_back("OK");
		}else{

			string anotherTemp = temp + NumberToString(list[temp]);
			outputs.push_back(anotherTemp);

			list[temp] = list[temp]+1;
		}

	}
	  
	for(int i=0;i<outputs.size();i++){
		cout << outputs[i] << endl;
	}

	return 0;
}
