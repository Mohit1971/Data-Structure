// proper link list 
// seen jenney lecture 

//structure the node
//create node
//do following inseration function 
// structuring node
#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
	
};
struct node *head;

//creating a node 
struct node *createNode()
{
	
	struct node *n;
	n= (struct node*)malloc(sizeof(struct node));
	return n;
	
}

//Display function 

void display()
{
	struct node * u;
u=head;	
while(u!=NULL)
{

printf("%d",u->data);
u=u->next;	
	
}	
	
}
// To find length of list 
int	count=0;
void length()
{

struct node *l;
	l=head;
	while(l!=NULL)
	{
		count++;
		l=l->next;
	}
printf("%d\n",count);
if(count%2 == 0)
printf("Even\n");
else
printf("Odd\n");
}



struct node *head,*newNode,*temp;  // defining head and newNode pointer ..




//insertion  function 
//1.using malloc we create a memory block ...
//2.then enter the data  ... 
//3.then enter the address ....

// inserting at begining 

void insertbegin()
{
	newNode= (struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newNode->data);
	newNode->next=head;
	head=newNode;
	
}


//insertion end 

 
void  insertend()
{

	newNode= (struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newNode->data);
	
	
	 newNode->next=NULL;          //Leftmost addressing
	
	//rightmost addresiing
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	
	temp->next=newNode;  // 
	
}


int pos,i=1;  // we define to variable one to know postion at which we want to insert the node and second for traversing of temp pointer by the help of while as shown below



// inseration position function 
//we take the position 
//validate the postion 
//memory assign using malloc function
//done the leftmost addresing and then rightmost
//put the node at that particualr position 

void  insertPosition()
{


	//enter the position 
	printf("enter the position ");
	scanf("%d",&pos);
	
	//validate using  length of linked llist (count variable)

	if(pos>count)
	{
		printf("Invalid postion");
		
	}
	
	
	//allocating node at proper position 
	else
	{
		temp=head;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
	
		newNode= (struct node*)malloc(sizeof(struct node));
	
              printf("enter the data");
			  scanf("%d",&newNode->data);

			  newNode->next=temp->next;     //leftmost addressing 
			  
			  temp->next=newNode;      // rightmost addressing 
			   	
}
	
}
	
	//Deletion from begin 

void deletebegin()
{
	
	struct node *temp;
	
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
	temp=head;
	head=head->next;
	free(temp);
	
    }
	}
	

	//Deletion from end 
	
	void deleteEnd()
	{
		struct node *prevnode;
		
		temp=head;
		
		while(temp->next!=NULL)
		{
			prevnode=temp;
			temp=temp->next;
			
		}
		if(temp== head)
		{
			head=NULL;
			free(temp);
		}
		
		else
		{
			prevnode->next=NULL;
			free(temp);
		}
		}	
		
		
		void deletePos()
		{
			struct node *nextnode;
			
			printf("Enter the position");
			scanf("%d",&pos);
			
			temp= head;
			
			while(i<pos-1)
			{
				temp=temp->next;
				i++;
			}

             nextnode=temp->next;
             temp->next=nextnode->next;
		     free(nextnode);
}

// seraching method

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
	ser=head;
	printf("%d",ser->data);
}
else
{

    temp=head;	
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}

	ser=temp->next;
	printf("%d\n",ser->data);

}
}

int sorted()
{
	int flag;
	struct node *prev,*temp;
temp=head;	
	while(temp!=NULL)
	{
		prev=temp;
		temp=temp->next;
		
		if(prev->data<=temp->data)
	{
			prev=temp;
		temp=temp->next;
	}
		else
		{
		
		return 0;
	}
	}
	
	return 1;

}




int main()
{
	insertbegin();
	insertend();
	length();
	insertPosition();


	display();
int p;
p=sorted();
printf("%d",p);	
	
}
