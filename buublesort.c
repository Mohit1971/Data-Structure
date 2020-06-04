#include<stdio.h>


	void swap(int *c, int *d)
	{
		int *t;
		
		*t=*c;
		*c=*d;
		*d=*t;
		
		
		
	}
	

void BubbleSort()
{
	printf("hi");
	int a[]={10,9,8,7,2,5,3,4,6,1},n=10;
	int i,j;
	
	for(i=0;i<n-1;i++)
	{
	
		for(j=0;j<n-1;j++)
		{
			
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			
			}
			
		}
		
	}
	
	for(i=0;i<n;i++)
printf("%d",a[i]);
	
}

int main()
{
	
	BubbleSort();


	
	return 0;
}
