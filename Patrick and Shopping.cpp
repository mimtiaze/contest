#include <iostream>
#include <fstream>
#include<climits>

using namespace std;

struct node{
    int fr, to, cost;
}p[6];

int c = 0, temp1 = 0, temp = 0,vertices;

int prims(int *a, int b[][3], int i){

    a[i] = 1;

	while (c < vertices-1){
		int min = INT_MAX;

		for (int i = 0; i < vertices; i++){
            if (a[i] == 1){

				for (int j = 0; j < vertices; ){
                    if (b[i][j] >= min || b[i][j] == 0){
                        j++;
                    }
                    else if (b[i][j] < min){
                        min = b[i][j];
                        temp = i;
                        temp1 = j;
                    }
                }
            }
        }
		if(a[temp1]==1 && a[temp]==1){
			b[temp][temp1] = b[temp1][temp]=INT_MAX;
		}
		else{
			a[temp1] = 1;
			p[c].fr = temp;
			p[c].to = temp1;
			p[c].cost = min;
			c++;       
			b[temp][temp1] = b[temp1][temp]=INT_MAX;
		}
    }

	int total=0;
	for (int k = 0; k < vertices-1; k++){
		//cout << p[k].cost << endl;
		total+=p[k].cost;
    }

	total*=2;
	return total;
}
int main(){

	int d1,d2,d3;
	vertices=3;
		
	while(cin >> d1 >> d2 >> d3){
	
		int a[3];
		for (int i = 0; i < 3; i++)
			a[i] = 0;
		
		int b[3][3];

		b[0][0]=b[1][1]=b[2][2]=0;
		b[0][1]=b[1][0]=d1;
		b[0][2]=b[2][0]=d2;
		b[1][2]=b[2][1]=d3;
    
		int sum=prims(a, b, 0);
		int sum2=d1+d2+d3;

		if(sum<sum2)
			cout << sum << endl;
		else
			cout << sum2 << endl;

	}

	return 0;
}