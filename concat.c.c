#include<stdio.h>
#include<stdlib.h>



struct node
{
	
	int data ;
	struct node *next;
};

struct node *head1=NULL;
struct node *head2=NULL;

void create1()
{
	
	struct node *temp;
	struct node*newnode;
	
	
	newnode=(struct node*)malloc(sizeof(struct node));
	
	printf("enter the data");
	scanf("%d",&newnode->data);
	
	newnode->next=NULL;
	
	if(head1 == NULL)
	{
		
		head1=newnode;
		
	}
	
	else
	{
		temp=head1;
		
		while(temp->next!=NULL)
		{
			
			temp=temp->next;
		}
		
		temp->next=newnode;
		
	}
	
	
	
}

void create2()
{
	
	struct node *temp;
	struct node *newnode;
	
	
	newnode=(struct node*)malloc(sizeof(struct node));
	
	printf("enter the data");
	scanf("%d",&newnode->data);
	
	newnode->next=NULL;
	
	if(head2==NULL)
	{
		
		head2=newnode;
		
	}
	
	else
	{
		temp=head2;
		
		while(temp->next!=NULL)
		{
			
			temp=temp->next;
		}
		
		temp->next=newnode;
		
	}
	

}



struct node *p; 
struct node *q;

void  display2()
{
		struct node *temp=head1;

	printf("LINKED LIST AFTER  Concat\n");
	while(temp!=NULL)
	{
		printf("\n%d\n",temp->data);
		temp=temp->next;
		
	}

	
}



void concat()
{
	
	p=head1;
	q=head2;
	
	
		
	while(p->next!=NULL)
	{
		p=p->next;
		
	}
	p->next=q;
	

}








int main()
{
	
	create1();
	create1();
	create2();
	create2();
	concat();
	display2(p);

	return 0;
}
