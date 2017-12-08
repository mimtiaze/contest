#include<bits/stdc++.h>

using namespace std;
double goat,p,c;
int main(){
	int n;
	while(cin>>n){
		int per_head=n/7;
		double mom_dad,child,pet;
		bool key=true;
		if(n==0){
			break;
		}
		else{
			for(int i =0;i<3;i++){
				//mom_dad=per_head;
				mom_dad=per_head+(i*0.5);

				//cout<<"mom_dad "<<mom_dad<<endl;
				for(int j=-1;j<2;j++){
					child=mom_dad+(j*0.5);
					//cout<<"Child "<<child<<endl;
					pet=n-2*mom_dad-5*child;
					//cout<<"Pet "<<pet<<endl;
					//if(pet>=0&&pet<=1e6&&key){
					if(pet>=0&&pet<=goat){
						goat=pet;
						p=mom_dad;
						c=child;
						//key=false;
					}
				}
			}
		}
		std::cout<<std::setprecision(1)<<std::fixed;
	    cout<<goat<<" "<<p<<" "<<p<<" "<<c<<endl;
	}

}
