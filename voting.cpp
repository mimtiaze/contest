#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int main(){

    string str;
    int y_count,n_count,a_count,p_count;

    while(1){
		y_count=0;
		n_count=0;
		a_count=0;
		p_count=0;

        cin >> str;

        if(str=="#")
            break;

		for(int i=0;str[i];i++){
			if(str[i]=='Y')
				y_count++;
			else if(str[i]=='A')
				a_count++;
			else if(str[i]=='P')
				p_count++;
			else if(str[i]=='N')
				n_count++;
		}

		if(a_count>=(y_count+n_count+p_count))
			cout << "need quorum" << endl;
		else{
			if(y_count==n_count)
				cout << "tie" << endl;
			else if(y_count>n_count)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}

    }


    return 0;
}
