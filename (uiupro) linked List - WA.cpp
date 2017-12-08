#include<stdio.h>
#include<stdlib.h>

struct node{
	int index;
	int number;
	struct node *next;
}*head,*tail;

int length=0;

// Funtions prototypes
void print();
void insert(int x);
void insert_last(int x);
void removeAt(int del);
void insertAtIndex(int numbur,int index);
void removeAtFromFirst();

void insert(int x){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->number = x;
	temp->next = NULL;
	head = temp;
}

void insertAtIndex(int number,int index){
	struct node *newTemp=(struct node *)malloc(sizeof(struct node));
	newTemp->number=number;
	newTemp->index=index;

	struct node *prev,*temp;
	int found=0;
	
	if(head==NULL){
		head=newTemp;
		newTemp->next=NULL;

		found = 1;
		/*temp=head->next;
		while(temp!=NULL){
			temp->index = (temp->index) + 1;
			temp=temp->next;
		}*/
	}
	else{
		prev=head;
		temp=head->next;
		while(temp!=NULL){
			if(temp->index==index){
				prev->next=newTemp;
				newTemp->next=temp;
				found=1;
				length++;
				while(temp!=NULL){
					temp->index = (temp->index) + 1;
					temp=temp->next;
				}
				break;
			}
			temp=temp->next;
			prev=prev->next;
		}
	}

	if(found==0){ 
		struct node *tempForSearch = head;
		while(tempForSearch->next!=NULL){
			tempForSearch=tempForSearch->next;
		}
		
		tempForSearch->next = newTemp;
		newTemp->next=NULL;
		
		length++;
	}
	
}

void insert_first(int input){

	struct node *temp=(struct node *)malloc(sizeof(struct node));

	if(head==NULL){
		head=temp;
		head->number=input;
		head->index=0;
		
		head->next=NULL;
	}
	else{
		temp->number=input;
		temp->index=0;
		temp->next=head;
		head=temp;

		struct node *current = head->next;
		while(current!=NULL){
			current->index = (current->index)+1;
			current=current->next;
		}
	}
	length++;
}


void print(){
	if(length!=0){
		struct node *temp=head;

		while(temp!=NULL){
			printf("%d ",temp->number);
			temp=temp->next;
		}
		printf("\n");
	}else{
		printf("empty\n");
	}
}



void removeAt(int index){
	struct node *current=head,*prev,*temp;

	if(head->index==index){
		current=head;
		head=head->next;
		free(current);
		length--;
	}
	else{
		prev=head;
		temp=head->next;
		while(temp!=NULL){
			if(temp->index==index){
				if(temp==tail){
					prev->next=temp->next;
					free(temp);
					break;
				}
				else{
					prev->next=temp->next;
					free(temp);
					break;
				}
			}
			temp=temp->next;
			prev=prev->next;
		}
		length--;
	}

	return;

}

void removeAtFromFirst(){
	struct node *current=head,*temp;

	if(head!=NULL){
		current=head;
		head=head->next;
		free(current);

		temp = head;
		while(temp!=NULL){
			temp->index = (temp->index)-1;
			temp=temp->next;
		}
	}
	
	if(length!=0)
		length--;
	return;

}


int main(){

	int index,number;
	char command;
	head = NULL;

	while(1){
		
		scanf("%c",&command);

		if(command=='r'){
			removeAtFromFirst();
			print();
		}else if(command=='f'){
			scanf("%d",&number);
			insert_first(number);
			print();
		}else if(command=='d'){
			scanf("%d",&index);
			removeAt(index);
			print();
		}else if(command=='i'){
			scanf("%d %d",&index,&number);
			insertAtIndex(number,index);
			print();
		}else if(command=='q'){
			break;
		}

		scanf("\n");
	
	
	}



	return 0;
}
