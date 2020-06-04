#include<stdio.h>
#include<stdlib.h>


void swap(int *x, int *y)
{
	
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}

int partition(int a[], int l, int h)
{
	
	int pivot = a[l];
	int i,j;
	i=l;
	j=h;


	while(i<j)
	{
	    
		while(a[i]<=pivot)
		{  
		i++;	}
	

	while(a[j]>pivot)
  {	j--; }	
  
	
if(i<j)
swap(&a[i],&a[j]);
		

	}
	
	
	swap(&a[l],&a[j]);
	
		
	return j;

		
}


void quicksort(int a[],int l,int h)
{
	
	int j;

	if(l<h)
	{

	
	j=partition(a,l,h);
	quicksort(a,l,j);
	quicksort(a,j+1,h);

}
	
}


int main()
{
	
int a[]= {7,5,3,1,9,2,12,4,6,8}, n=10,i;
	
quicksort(a,0,9);

for(i=0;i<n;i++)
printf("%d",a[i]);

return 0 ;

	
}

