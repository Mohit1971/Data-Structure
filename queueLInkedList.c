#include<stdio.h>
#include<stdlib.h>


struct node
{
	struct node *next;
	
	int data;
};

	struct node *front=0;
	struct node *rear=0;
void enqueue(int x)
{
	struct node *newnode;
	
	newnode=(struct node *)malloc(sizeof(struct node));
	
	newnode->data=x;
	newnode->next=NULL;
	
	if(front==0 && rear==0)
	{
		front=rear=newnode;
	}
	
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	
}



void display()
{
	
	if(front==0 && rear==0)
	{
		printf("List is empty ");
	}
	
	struct node*temp;
	temp=front;
	
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
		
	}
	
}

void dequeue()
{
	
	struct node *temp;
	
	if(front==0 && rear==0)
	{
		printf("List is empty ");
	}
	else
	{
		temp=front;
		front=front->next;
		free(temp);
	}
	
}

int main()
{
	enqueue(1);
	enqueue(9);
	enqueue(9);
	enqueue(9);
	enqueue(9);
	dequeue();
	display();
	
	
	return 0;
	
}
