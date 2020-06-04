#include<stdio.h>
#include<stdlib.h>

struct node
{

int data;
struct node *next;

};

struct node *newnode ,*head,*temp,*prev,*nextnode;

void insert()
{
newnode = (struct node *)malloc(sizeof(struct node));

printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;

if(head == NULL)
{
	head=newnode;

}

else
{
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;

	}

	temp->next=newnode;

}


}
void reverse()
{

prev=NULL;

nextnode=temp=head;

while(nextnode!=NULL)
{
nextnode=temp->next;
temp->next=prev;
prev=temp;
temp=nextnode;
}


head=prev;

}

void print()
{
	temp=head;


	while(temp!=NULL)
	{
		printf("%d",temp->data);
	    temp = temp->next;

	}

}



int main()
{
insert();
insert();
insert();
insert();
reverse();
print();

}
