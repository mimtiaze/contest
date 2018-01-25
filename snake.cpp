
// Mohammad Maruf Imtiaze
// Snake game (hissssssss)

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

void bang();
void gotoxy(int x, int y);
void Delay();
void eat();
void gameplay();
void border();
void crush();
void outline();
void gameover();
void clear_body();
void buffering();
void mood();

int score=0,len=2,life=5,lvl=1,eat_count=0,mood_count;

struct snake{
	int x;
	int y;
	int direct;
};
struct snake head,food,body[50],store[50];

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



void outline(){
	gotoxy(5,2);	printf("Score:  %d",score);
	gotoxy(35,2);	printf("Level:  %d",lvl);
	gotoxy(65,2);	printf("Life:  %d",life);
	gotoxy(16,24);	printf("Copyright - Mohammad Maruf Imtiaze @ 2015");
}

void buffering(){
    int i,j;

    gotoxy(36,17);
    printf("loading...");
    gotoxy(30,18);
    for(i=1;i<=20;i++){
		for(j=0;j<=15000000;j++);						   //to display the character slowly
		printf("%c",177);
	}
    gotoxy(27,19);	printf("Press any key to continue...");		getch();
}


void border(){
	int i;

	for(i=4;i<=73;i++){	gotoxy(i,3);	printf("%c",1);	}
	for(i=4;i<=73;i++){	gotoxy(i,22);	printf("%c",1);	}
	for(i=3;i<=22;i++){	gotoxy(4,i);	printf("%c",1);	}
	for(i=3;i<=22;i++){	gotoxy(73,i);	printf("%c",1);	}

	/*if(lvl==2)
		for(i=10;i<=15;i++){	gotoxy(37,i);	printf("%c",1);	}

	if(lvl==3){
		for(i=10;i<=15;i++){	gotoxy(17,i);	printf("%c",1);	}
		for(i=10;i<=15;i++){	gotoxy(27,i);	printf("%c",1);	}
		for(i=10;i<=15;i++){	gotoxy(37,i);	printf("%c",1);	}
		for(i=10;i<=15;i++){	gotoxy(47,i);	printf("%c",1);	}
		for(i=10;i<=15;i++){	gotoxy(57,i);	printf("%c",1);	}
		for(i=17;i<=27;i++){	gotoxy(i,15);	printf("%c",1);	}
		for(i=47;i<=57;i++){	gotoxy(i,15);	printf("%c",1);	}
	}*/
}

void crush(){
	int i;

	for(i=0;i<=len;i++)															// Own body crushing
		if(head.x==body[i].x && head.y==body[i].y)
			clear_body();

	//if(lvl==1){
		if(head.x==4)
			head.x=72;
		if(head.x==73)
			head.x=5;
		if(head.y==3)
			head.y=21;
		if(head.y==22)
			head.y=4;
	//}

	//if(lvl==2){
	//	if(head.x==4 || head.x==73 || head.y==3 || head.y==22)		clear_body();	}	// play again

	/*if(lvl==2)
		for(i=10;i<=15;i++)		if(head.x==37 && head.y==i)		clear_body();


	if(lvl==3){
		for(i=10;i<=15;i++)		if(head.x==17 && head.y==i)		clear_body();
		for(i=10;i<=15;i++)		if(head.x==27 && head.y==i)		clear_body();
		for(i=10;i<=15;i++)		if(head.x==37 && head.y==i)		clear_body();
		for(i=10;i<=15;i++)		if(head.x==47 && head.y==i)		clear_body();
		for(i=10;i<=15;i++)		if(head.x==57 && head.y==i)		clear_body();
		for(i=17;i<=27;i++)		if(head.x==i && head.y==15)		clear_body();
		for(i=47;i<=57;i++)		if(head.x==i && head.y==15)		clear_body();
	}*/
}


void clear_body(){													// Reseting body position and reducing life
	int i;

	life--;
	for(i=0;i<50;i++){
			body[i].x=0;
			body[i].y=0;
		}
	for(i=0;i<50;i++){
			store[i].x=0;
			store[i].y=0;
		}
	gameplay();
}


void gameover(){
	system("cls");
	gotoxy(32,7);	printf("GAME OVER");
	gotoxy(29,8);	printf("Your score =  %d",score);
}


void bang(){
	food.x=rand()%66+5;
    food.y=rand()%17+4;
    gotoxy(food.x,food.y);    printf("%c",15);     // coordinate of bang
}


void eat(){
	if(head.x==food.x && head.y==food.y){
		printf("\a");
		if(lvl==1)										// Increasing score
			score+=2;
		if(lvl==2)
			score+=3;
		if(lvl==3)
			score+=5;
		if(lvl==4)
			score+=8;
		if(len<50)										// increasing length
			len++;
		srand(time(NULL));
		bang();
		eat_count++;
	}

	if(lvl!=2){
		if(eat_count==3){
			lvl=2;
			//clear_body();
			//gameplay();
		}
	}


	if(lvl!=3){
		if(eat_count==5){
			lvl=3;
			//clear_body();
			//gameplay();
		}
	}
	if(lvl!=4){
		if(eat_count==8){
			lvl=4;
			//clear_body();
			//gameplay();
		}
	}
}


void Delay(){
	long double i;
	if(lvl==1)	for(i=0;i<=(10000000);i++);
	if(lvl==2)	for(i=0;i<=(10000000);i++);
	if(lvl==3)	for(i=0;i<=(10000000);i++);
	if(lvl==4)	for(i=0;i<=(10000000);i++);
}


void gameplay()
{
	int i,j,c,f;
	system("cls");

	border();
	outline();

	head.x=10;
	head.y=13;
	gotoxy(head.x,head.y); printf("@:");

	bang();

	while(1){
		if(life>0){
			switch(c=getch()){

			case 72:											// Up key
				head.x;
				head.y;
				head.direct=72;


				while(head.y>=3){
					Delay();
					system("cls");

					border();

					gotoxy(food.x,food.y);    printf("%c",15);
					eat();

					if(kbhit()){
						c=getch();
						break;
					}

					for(i=0;i<len;i++){
						store[i].x=body[i].x;
						store[i].y=body[i].y;
					}

					body[0].x=head.x;
					body[0].y=head.y;
					head.y--;

					gotoxy(head.x,head.y);	printf("@");
					crush();
					gotoxy(body[0].x,body[0].y);	printf("o");

					for(i=1;i<len;i++){
						body[i].x=store[i-1].x;
						body[i].y=store[i-1].y;
						gotoxy(body[i].x,body[i].y);	printf("o");
					}
					outline();
				}
				break;

			case 75:															//  Left key
				head.x;
				head.y;
				head.direct=75;


				while(head.x>=5){
					Delay();
					system("cls");

					border();

					gotoxy(food.x,food.y);    printf("%c",15);
					eat();

					if(kbhit()){
						c=getch();
						break;
					}

					for(i=0;i<len;i++){
						store[i].x=body[i].x;
						store[i].y=body[i].y;
					}

					body[0].x=head.x;
					body[0].y=head.y;
					head.x--;

					gotoxy(head.x,head.y);	printf("@");
					crush();
					gotoxy(body[0].x,body[0].y);	printf("o");

					for(i=1;i<len;i++){
						body[i].x=store[i-1].x;
						body[i].y=store[i-1].y;
						gotoxy(body[i].x,body[i].y);	printf("o");
					}
					outline();
				}
				break;

			case 77:															// Right key
				head.x;
				head.y;
				head.direct=77;

				while(head.x<=72){
					Delay();
					system("cls");

					border();

					gotoxy(food.x,food.y);    printf("%c",15);
					eat();

					if(kbhit()){
						c=getch();
						break;
					}

					for(i=0;i<len;i++){
						store[i].x=body[i].x;
						store[i].y=body[i].y;
					}

					body[0].x=head.x;
					body[0].y=head.y;
					head.x++;

					gotoxy(head.x,head.y);	printf("@");
					crush();
					gotoxy(body[0].x,body[0].y);	printf("o");

					for(i=1;i<len;i++){
						body[i].x=store[i-1].x;
						body[i].y=store[i-1].y;
						gotoxy(body[i].x,body[i].y);	printf("o");
					}
					outline();
				}
				break;
			case 80:														// Down key

				head.x;
				head.y;
				head.direct=80;

				while(head.y<=21){
					Delay();
					system("cls");

					border();

					gotoxy(food.x,food.y);    printf("%c",15);
					eat();

					if(kbhit()){
						c=getch();
						break;
					}


					for(i=0;i<len;i++){
						store[i].x=body[i].x;
						store[i].y=body[i].y;
					}

					body[0].x=head.x;
					body[0].y=head.y;
					head.y++;

					gotoxy(head.x,head.y);	printf("@");
					crush();
					gotoxy(body[0].x,body[0].y);	printf("o");

					for(i=1;i<len;i++){
						body[i].x=store[i-1].x;
						body[i].y=store[i-1].y;
						gotoxy(body[i].x,body[i].y);	printf("o");
					}
					outline();
				}
				break;
			case 71:
				life++;
			}
		}
	}
}

void mood(){
	gotoxy(36,10);	printf("Select Mood:");
	gotoxy(34,11);	printf("1. Classic");
	gotoxy(34,12);	printf("2. With Obstacle");
	scanf("%d",&mood_count);
}

int main(){

	buffering();

	//mood();

	gameplay();

	return 0;
}
