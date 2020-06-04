// Linear search recursively ...............................




#include<stdio.h>
#include<stdlib.h>


int search(int a[], int g ,int f , int x)
{
	
	
	if(a[g]==x)
	return 1;
	
	 if (a[f]==x)
	return f ;
	
	 if(f<g)
		return -1;
	
	
	
	         return search(a,g+1,f-1,x);
	
	
	
}


int main()
{
	int a[]={2,3,4,5},n=4;
	
	int x;
	scanf("%d",&x);
	
	int e = search(a,0,n-1,x);
	printf("%d",e);
	
	return 0;
}
