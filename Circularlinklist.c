#include<stdio.h>
#include<stdlib.h>


struct node 
{
	
	int data;
	struct node *next;
};

struct node *head,*temp;

int count;

/*
struct node * createnode()
{
	newnode= (struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		tail=newnode;
       		
       		
	}
	
	else
	{
		
		tail->next=newnode;
		tail=newnode;
		tail->next=head;
		
		
		
	}
	
	
	
	
}

*/

void beginsert()  
{  
    struct node *ptr;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else   
    {  
        printf("\nEnter the node data?");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        printf("\nnode inserted\n");  
    }  
              
}

void insertlast()

{
	struct node *ptr;
	
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&ptr->data);
	
	if(head == NULL)
	{
	
	head=ptr;
	ptr->next=head;
		
		
	}
	
	else
	{
		temp=head;
		
		while(temp->next!=head)
	{
	temp=temp->next;
	}	
	    temp->next=ptr;
		ptr->next=head;
		
	}
	printf("\nnode inserted\n");  
}

int  getLength()
{
	temp=head;
	int count=0;
	while(temp->next!=head)
	{
			count++;
		temp=temp->next;
		
		
	}
	
//	printf("\n%d\n",(count+1));
	
	return count+1; 
	
}


void insertpos()
{
	
	struct node *ptr;
	int i=1,pos;
	
	printf("Enter the position");
	scanf("%d",&pos);
	
	int g=getLength();
	

	if(pos<0 || pos>g)
	{
		printf("invalid position");
	}

	else if( pos==1)
	
	{
		beginsert();
		
		
	}
	
	else
	{
			ptr=(struct node *)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&ptr->data);
	
		temp=head;
		
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		
		ptr->next=temp->next;
		temp->next=ptr;
		
	}
	
	printf("\nnode inserted\n");  
}


void deletebegin()
{
	
	if(head==NULL)
	{
		printf("list is empty");
	}
else if(head->next == head)
{
	head=NULL;
	
	free(head);
	
}

else
{
	temp=head;
	
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	
	temp->next=head->next;
	free(head);
	head=temp->next;
	
	
}
}

void deleteend()
{
	
	struct node *prev;
	
		if(head==NULL)
	{
		printf("list is empty");
	}
else if(head->next == head)
{
	head=NULL;
	
	free(head);
	
}
else
{
 
 temp=head;
 
 while(temp->next!=head)
 {
 	
 	prev=temp;
 	temp=temp->next;
	 }	
	
	prev->next=temp->next;
	free(temp);
}
}

void display()
{
	
	temp=head;

	while(temp->next!=head)
	{
		printf("%d\n",temp->data)	;
		temp=temp->next;
		
	}
printf("%d",temp->data);

}








int main()
{
	/*createnode();
	insertbegin();
insertbegin();
*/

beginsert();
beginsert();
beginsert();
insertlast();
getLength();
insertpos();
display();
deletebegin();
deleteend();
display();
return 0;
}
