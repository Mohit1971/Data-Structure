
//practice 

//structure the node
//create node
//do following inseration function 

//insertion begin  function 
//1.using malloc we create a memory block ...
//2.then enter the data  ... 
//3.then enter the address ....


struct node
{
	int data;
	struct node * next;
	
};


struct node* createNode()
{
	
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	return n;
	
}

struct node *head,*newnode,*temp; 

void insertBegin()
{
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
}


void insertEnd()
{
	temp=head;
	
	while(temp->next!= NULL)
	{
		temp=temp->next;
		
	}
	
	temp->next=newnode;
	newnode->next=NULL;
}


int i;
void insertPosition()
{
	
	if(pos>count)
	{
		printf("invalid position";
		)
		
	}
	else
	{
		
		
		
	}
	
}



void deletebegin()
{
	temp=head;
	head=head->next;
	free(temp);
}


void deleteend()
{
	
	struct node *prevnode;
	
	temp=head;
	while(temp->next!=NULL)
	{
		prevnode=temp;
		temp=temp->next;
		
	}
	
	prevnode->next=NULL;
	free(temp);
	
	
}

void deletepos()
{
	struct node *nextnode;
	
	while(i<pos-1)
	{
		
		temp=temp->next;
		i++;	
		
		
		
	}
	
	 nextnode=temp->next;
	 temp->next=newnode->next;
	 free(nextnode);
	 
	 
}


void search()
{
	struct node *ser;
	scanf("%d",&pos);
	
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
		
		
	}
	ser=temp->next;
	printf("%d",ser->data);
	
}
