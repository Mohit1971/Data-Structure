#include<stdio.h>
#include<stdlib.h>


void merge(int a[], int l, int mid, int u)
{
	
	int b[6];
	int i=l;
	int j=mid+1;
	int k=l;
	
	while(i<=mid && j<=u )
	{
		if(a[i]<=a[j])
		{
			
			b[k]=a[i];
			i++;
			
		}
		else
		{
			
			b[k]=a[j];
			j++;
			
		}
		k++;
	
     }
		
		if(i>mid)
		{
			while(j<=u)
			{
				b[k]=a[j];
				j++;
				k++;
			}
			
		}
		
		else 
		{
				while(i<=mid)
			{
				b[k]=a[i];
				i++;
				k++;
			}
			
			
			
		}
		
		
	 for(k=l;k<=u;k++)
	 {
	 
	 a[k]=b[k];
}
	
}


void mergesort(int a[],int l, int u)
{
	
	int mid=0;

	if(l<u)
{
	
	mid=(l+u)/2;
	mergesort(a,l,mid);
	mergesort(a,mid+1,u);
    merge(a,l,mid,u);	
}
	
	
}


int main()
{
	
	

	int a[]= {5,3,1,8,6,9}, n=6,i;
	mergesort(a,0,n-1);


	
	for(i=0;i<n;i++)
	{
		
		printf("%d\n",a[i]);
	}

return 0;

}
