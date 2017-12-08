#include<iostream>
#include<string>

using namespace std;

int main(){

	int row,column;
	
	cin >> row >> column;

	string input[1000+10];

	for(int i=0;i<row;i++){
		cin >> input[i];
	}

	int maxStarInRow=0;
	int maxStarInColumn=0;
	int maxStarRowNumber;
	int maxStarColumnNumber;

	// counting max star in row
	for(int i=0;i<row;i++){
		int tempCount=0;
		int tempRow=i;
		for(int j=0;j<column;j++){
			if(input[i][j]=='*')
				tempCount++;
		}
		if(tempCount>maxStarInRow){
			maxStarInRow=tempCount;
			maxStarRowNumber=tempRow;
		}
	}

	// counting max star in column
	for(int i=0;i<column;i++){
		int tempCount=0;
		int tempColumn=i;
		for(int j=0;j<row;j++){
			if(input[j][i]=='*')
				tempCount++;
		}
		if(tempCount>maxStarInColumn){
			maxStarInColumn=tempCount;
			maxStarColumnNumber=tempColumn;
		}
	}

	int oneBomb=true;

	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(input[i][j]=='*'){
				if(i!=maxStarRowNumber && j!=maxStarColumnNumber){
					oneBomb=false;
					break;
				}
			}
		}

		if(oneBomb==false)
			break;
	}

	if(oneBomb){
		cout << "YES" << endl;
		cout << maxStarRowNumber+1 << " " << maxStarColumnNumber+1 << endl;
	}
	else{
		cout << "NO" << endl;
	}

	return 0;
}
