// in this we merge two sorted linked list keep this in mind .....................................

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

struct node* merge(struct node *p ,struct node *q)
{
	 struct node *head,*s;
	
	
	head=NULL;
	
	if(p == NULL)
	{
	
	return q;
		
	}
	
	if(q == NULL)
	{
		
		
		return p;
		
	}
	
	
	if(p && q)
	{
		
		if(p->data <= q->data)
		{
			s=p;
			p=s->next;
		}
		
		else
		{
			s=q;
			q=s->next;
		}
	}
	
	head=s;
	
	while(p && q)
	{
		
		if(p->data <= q->data)
		{
			s->next=p;
			s=p;
			p=s->next;
			
		}
		
		else
		{
			s->next=q;
		    s=q;
		    q=s->next;
		 
		
		}
}


if(p == NULL)
{
	s->next=q;
}



if(q == NULL)
{
	s->next=p;
}

return head;
	
}


void display(struct node *temp)
{
	
   while(temp!=NULL)
   {
   	printf("%d",temp->data);
   	
   	temp=temp->next;
   }

}

int main()
{

struct node *u;

	create1();
	create1();
		create1();
	create1();
	create2();
	create2();
	create2();
	create2();
	
	
	u = merge(head1,head2);
	
	display(u);
	
}
