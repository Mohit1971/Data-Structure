#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data ;
	struct node *next;
	struct node *prev;
	 
	
} *head,*temp,*newnode;



/*void insertbegin()
{
	
newnode = (struct node*)malloc(sizeof(struct node));

printf("enter the data ");
scanf("%d",newnode->data);
	
	
	
	
}
*/


void insertbegin()
{


newnode = (struct node*)malloc(sizeof(struct node));

 printf("enter the data ");
 scanf("%d",&newnode->data);

  if(head == NULL)
{
	head=newnode;
	newnode->next=head;
	newnode->prev=newnode;
	
}	

else
{
	
	temp=head;
	
	while(temp->next!=head)
	{
		
		temp=temp->next;
	}
	
	temp->next=newnode;
	newnode->next=head;
	newnode->prev=temp;
	head->prev=newnode;
	head=newnode;
	
}
		
	
	
}

void insertlast()
{

newnode = (struct node*)malloc(sizeof(struct node));

printf("enter the data ");
scanf("%d",&newnode->data);

if(head == NULL)
{
	head=newnode;
	newnode->next=head;
	newnode->prev=newnode;
	
	}	
	
	
	else
	{
		temp=head;
		
		while(temp->next!=head)
		{
			
			temp=temp->next;
		}
		
		temp->next=newnode;
		newnode->prev=temp;
		newnode->next=head;
		head->prev=newnode;
		
	}
	
	printf("hello");
	
}


void insertpos()
{
	struct node *nextnode;
	
	int pos,i=1;
	printf("enter the position");
	scanf("%d",&pos);
	
	int p=length();
	
	if(pos<0 || pos>p)
	{
		
		
		printf("invalid position");
	}
	
	else if(pos==0)
	{
		
		insertbegin();
	}
	
	else
	
	{
		
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("enter the data ");
    scanf("%d",&newnode->data);

		while(i<pos)
		{
			temp=temp->next;
			i++;
			
			
		}
		
		nextnode=temp->next;
		temp->next=newnode;
		newnode->prev=temp;
		newnode->next=nextnode;
		nextnode->prev=newnode;
		
     	}
	
	
	
	
}

void deletebegin()
{
	
	
	
	if(head == NULL)
	{
		printf("Invalid ");
		
		
	}
	
	else if(head->next == head)
    {
    	
    	head->next=NULL;
    	
    	free(head);
    	
    	
		}	
     else 
     {
     	temp=head;
     	
     	while(temp->next!=head)
     	{
     		temp=temp->next;
		 }
     	
     	temp->next= head->next;
     	head->next->prev=temp;
     	
     	free(head);
     	
     	head=temp->next;
	 }

}

void deletelast()
{
	
	if(head == NULL)
	{
		printf("Invalid ");
		
		
	}	
	
	
	else if(head->next == head)
    {
    	
    	head->next=NULL;
    	
    	free(head);
    	
    	
		}
		
		else
		{
			temp=head;
			while(temp->next!=head)
			{
				temp=temp->next;
			}
			temp->prev->next=head;
			head->prev=temp->prev;
			free(temp);
			
		}
	
	
	
	
	
}

void deletepos()

{
	struct node  *nextnode;
	
	int i=1,pos;
	
	printf("Enter the position");
	scanf("%d",&pos);
	
		if(head == NULL)
	{
		printf("Invalid ");
		
		
	}
	else
	{
		temp=head;
		
		while(i<pos-1)
		{
			
			temp=temp->next;
	i++;	}
	}
	
nextnode=temp->next;

temp->next=nextnode->next;

nextnode->next->prev=temp;

free(nextnode);


}

int length()
{
	int count =0;
	temp=head;
	
	while(temp->next!=head)
	{
		temp=temp->next;
		count++;
	}
	
		return count+1;
}



void display()
{
	
	temp = head;
	while(temp->next!=head)
	{
		printf("%d",temp->data);
		temp=temp->next;
		
		
	}

	printf("%d",temp->data);
}

int main()
{
	

	insertbegin();
		insertbegin();
		
	insertlast();
	insertlast();
	
	
	insertpos();
    deletebegin();
    deletelast();
    
    deletepos();
	display();
}
