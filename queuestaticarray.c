/*  Implement a queue using the static array in queue inseration done at rear and deletion done at front .............................. */ 


#include<stdio.h>
#define N 5


int queue[N];

int front=-1;
int rear=-1;
void enqueue(int x)
{
	if(rear== N-1)
	{
		printf("Overflow");
	}
	
	else if(front==-1 && rear==-1)
	{
		
		
		front=rear=0;
		
		queue[rear]=x;
		
		
	}
	
	else
	{
		rear++;
		queue[rear]=x;
		
	}
	
}

void dequeue()
{
	
	if(front==-1 &&rear==-1)
	{
		printf("queue is empty");
	}
    
	else if(front==rear)
{
	
	front=rear=-1;
}

else 
{
	
	front++;
	
}

}

void display()
{
	
	if(front==-1 && rear==-1)
	{
		
		
		printf("empty list");

	}
	
	else
	{
		int i;
		for(i=front;i<rear+1;i++)
		printf("%d \n",queue[i]);
	}
}

int main()
{
	
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	display();
	dequeue();
	display();

	
	return 0;
}
