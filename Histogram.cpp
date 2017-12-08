#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int main(){

	int t,N,t_case,input[30000+20000],left_counter,right_counter,max_ractangle_area,ractangle_width;

	cin >> t;

	

	for(t_case=1;t_case<=t;t_case++){

		cin >> N;

		max_ractangle_area=0;

		for(int i=0;i<N;i++){
			cin >> input[i];
		}

		for(int i=0;i<N;i++){
			left_counter=0;
			right_counter=0;
			ractangle_width=0;

			for(int j=i-1;j>=0;j--){
				if(input[i]>input[j])
					break;
				else{
					left_counter++;
				}
			}

			for(int j=i+1;j<N;j++){
				if(input[i]>input[j])
					break;
				else{
					right_counter++;
				}
			}

			ractangle_width=left_counter+right_counter+1;

			int temp_area=(ractangle_width*input[i]);

			if(temp_area>max_ractangle_area)
				max_ractangle_area=temp_area;

		}

		printf("Case %d: %d\n",t_case,max_ractangle_area);

	
	}
    

    return 0;
}
