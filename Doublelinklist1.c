// doubly Link List.......................................................................................................
// jennys lecture.........................................................................................................

#include<stdio.h>
#include<stdlib.h>

// structuring the node means just making data type(struct node)...........................................................

struct node
{
	int data ;
	struct node *next;
	struct node *prev;
};

//decalring the pointer  ..................................................................................................

struct node *head,*temp,*newnode;
    	
// create node function : createing the node ...............................................................................     	
    	
	/*void createnode()
{
	
	
	//while(choice)
//{
	
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
//	printf("do you want to continue");
//	scanf("%d",&choice);
	
//}

}*/

// display function : to display the data.....................................................................................


void display(struct node *n)
{

	
	while(n!=NULL)
{
	
		printf("\n%d",n->data);
    	n=n->next;
}

}

// insertion begin function : if we want to insert node at begin .....................................................................

void insertionbegin()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	
	printf("Enter the data at begin of node");
	scanf("%d",&newnode->data);
	newnode->prev=NULL;
	newnode->next=NULL;
	
	if(head==NULL)
	{
		head=newnode;		
	}
		else
		{
			
			newnode->next=head;
			head->prev=newnode;
			head=newnode;
			
		}
		printf("Node inserted at begining");
}


// insertion end function : if we want to insert node at the end .........................................................................

void insertend()
{
	
		newnode=(struct node*)malloc(sizeof(struct node));
	
	printf("Enter the data at the end of the node");
	scanf("%d",&newnode->data);
	
		newnode->next=NULL;
        
		if(head==NULL)
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
		
	
		newnode->prev=temp;
		temp->next=newnode;
		
	}
	
	printf("Node inserted at end");

}

//lengthfunction : If we want  to find the length of linked list ....................................................................

int count=0;

void length(struct node *l)
{
	
	l=head;
	while(l!=NULL)
	{
		count++;
		l=l->next;
	}
	printf("Length");
printf("%d/n",count);

}

//insertpos : if we want to insert node at particular position .....................................................................................

void insertpos()
{
	newnode=(struct node*)malloc(sizeof(struct node));	

	int pos;
	printf("Enter the position");
	scanf("%d",&pos);
	
	printf("enter the data");
	scanf("%d",&newnode->data);


 if(pos ==1)
{

	insertionbegin();


}	
else 
{
	int i=1;
	
	 temp=head;
	
	while(i<pos-1)
	{
		
		temp=temp->next;
		i++;
		
	}
	
    newnode->next=temp->next;
	newnode->prev=temp;
	temp->next=newnode;
	temp->next->prev=newnode;
	
	
	
}

printf("Node inserted at %d position",pos);
}

//Deletebegin function: If we want to delete the node from begin ..................................................................................

void deletebegin()
{


	if(head==NULL)
	{

		printf("you cannot delte the node");

	}

else

{
	
	temp=head;
	head=head->next;
	head->prev=NULL;
	free(temp);


}

printf("Node is deleted at begin");
}

//deleteend functio: if we want  delete node  from end ...................................................................................................

void deleteend()
{
	
	struct node *prevnode; 
	
	temp=head;
	
	while(temp->next!=NULL)
	{
		prevnode=temp;
		
		temp= temp->next;
		
	}
	
	prevnode->next=NULL;
	free(temp);
	
	printf("Node i9s deleted at end");
}


void deletepos()
{
     int pos;	
	

	
	if(head==NULL)
	{
		printf("INVALID POSITIOM");
	}
	

	else
	{
		int i=1 ;
		temp=head;
		printf("Enter the position ");
		scanf("%d",&pos);
		
		while(i<pos)
		{
			temp=temp->next;
	      	i++;	
		}
	 temp->prev->next=temp->next;
	 temp->next->prev=temp->prev;

	 free(temp);
	     
	
	
	}
	
	printf("Node is deleted at %d position",pos);
}

//Main function ........................................................................................................................................

int main()
{
	
//	    createnode();
         insertionbegin();
	     insertionbegin();
	     insertionbegin();
	     insertionbegin();
	      length(head);
	      insertpos();
	      insertend();
		 display(head);
		 deletebegin();
		 display(head);
		 deletepos();
		 length(head);
		 deletepos();
        display(head);	
}
