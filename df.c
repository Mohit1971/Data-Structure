#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data ;
	struct node *next;
	struct node *prev;
};


struct node *head,*temp,*newnode;
    	
int choice=1;
void createnode()
{
	
	
	while(choice)
{
	
	newnode=(struct node*)malloc(sizeof(struct node));
	
	printf("enter the data");
	scanf("%d",&newnode->data);
	
	newnode->next=NULL;
	newnode->prev=NULL;
	
	if(head==NULL)
	{
		
		head=newnode;
	}
	else
	{
		    temp=head;
	        temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;

	}
	printf("do you want to continue");
	scanf("%d",&choice);
	
}

}


void display(struct node *n)
{
	
	printf("hello");
	
	
	
	
	
	while(n!=NULL)
{
	
		printf("%d",n->data);
    	n=n->next;
}


}



void insertionbegin()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	
	printf("Enter the data");
	scanf("%d",&newnode->data);
	
	if(head==NULL)
	{
		head=newnode;		
	}
	
	else
		{
			newnode->prev=NULL;
			newnode->next=head;
			head->prev=newnode;
			head=newnode;
			
		}
}


int main()
{
	
	//createnode();
	//createnode();
	createnode();
       
       //insertionbegin();
	display(head);
	
	
}
