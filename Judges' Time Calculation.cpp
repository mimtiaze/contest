#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
//#include<algorithm>

using namespace std;

int main(){

    int t,time[10];
	bool minus_time;

	cin >> t;

	while(t){
		for(int i=0;i<4;i++){
			cin >> time[i];
		}

		int hr=time[0],min;
		if(time[1]!=0){
			min=time[1];
			minus_time=true;
		}
		else{
			min=0;
			minus_time=false;
		}

		int extendend_time=time[1]+time[3];
		int loop_plus_plus;
		if(extendend_time>=60){
			loop_plus_plus=1;
			extendend_time=extendend_time-60;
		}
		else{
			loop_plus_plus=0;
		
		}

		cout << "------+---------" << endl;
		cout << " time | elapsed" << endl;
		cout << "------+---------" << endl;

		for(int i=0;i<=(time[2]+loop_plus_plus);i++){
			

			if(minus_time)
				printf("%2d:XX | XX - %d\n",hr,min);
			else if(min==0)
				printf("%2d:XX | XX\n",hr,min);
			else
				printf("%2d:XX | XX + %d\n",hr,min);

			
			hr++;
			if(hr==13)	
				hr=1;
			if(minus_time){
				min=60-min;
				minus_time=false;
			}
			else{
				min+=60;
			}
		}
		t--;
	}

    return 0;
}
