
// saurabh shukla seen ..............................................................

#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;




struct node* createNode()
{
	struct node *n;
	n= (struct node *)malloc(sizeof(struct node));
	return n;
}


// inseration at end  ...............................................................

 void insertNode()
 {
 	struct node  * temp,*t;
 	temp=createNode();
	
	printf("Enter the value");
	scanf("%d",&temp->data);
	
	temp->next=NULL;
	
	if(start==NULL) 
	{
		start=temp;
	}
	 else

{
		  	 	 t=start;
		
   while(t-> next!=NULL)
    {
	 	 
	 	 t=t->next;
	 }
	t->next=temp;  
}
}

//printing method ......................................................... 

void printlist(struct node * n)
{
	while(n!=NULL)
{
		printf("%d",n->data);
	n=n->next;
}
}

int count=0;

void length(struct node *l)
{
	
	l=start;
	while(l!=NULL)
	{
		count++;
		l=l->next;
	}
	printf("Execute length");
printf("%d",count);
if(count%2 == 0)
printf("Even");
else
printf("Odd");

}

//searching method ............................................... 

void search()
{
	struct node *ser,*temp;
	int i=1,pos;
	printf("enter the position ");
	scanf("%d",&pos);
if(pos>count)
{
	printf("invalid position");
}
else if(pos==1)
{
	ser=start;
	printf("%d",ser->data);
}
else
{

    temp=start;	
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}

	ser=temp->next;
	printf("%d\n",ser->data);

}
}



int main()
{

insertNode();
insertNode();
insertNode();
insertNode();
printf("\n");
printlist(start);
printf("\n");
length(start);
printf("\n");
search();
	  return 0;
}
