#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
	int data ;
	struct node *left;
	struct node *right ;
	
	
};


struct node * getnode(int k)
{
	struct node* node;
	node=(struct node*)malloc(sizeof(struct node));
     node->data=k;
	node->right=node->left=NULL;
	
	return node;
	
}

struct node* insert(struct node *root,int data)
{
	
	

	
	if(root == NULL)
{

	root=getnode(data);
	return root;
	
	
	}	
	
	else if(data <= root->data)
{
       
	   
	   root->left = insert(root->left,data);


}	

else
{
	
	root->right = insert(root->right,data);
	
}

return root;


}

bool search(struct node *root, int data)
  {

	if(root==NULL)
	{
		
		return false;
		
	}
	 

	 else if(root->data == data)
	{

		return true;

	 } 
	

	 else if(data <= root->data)
	 {

	 	return search(root->left,data);

	 }


else 
{

	return search(root->right,data);

}



}

int findmin(struct node* root)
{
	
	struct node *temp;
	
	temp=root;
	
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	
return temp->data;

}

int findmax(struct node* root)
{
	
	struct node *temp;
	
	temp=root;
	
	while(temp->right!=NULL)
	{
		temp=temp->right;
	}
	
return temp->data;

}

int findheight(struct node *root)
{
	int left,right,height;
	if(root==NULL)
	{
		return 0;
		
	}
	
	else
	{
		 left= findheight(root->left);
		 right=findheight(root->right);
		
	}
	if(left>right)
	{
		height=left+1;
	}

else
{
	height=right+1;
}

return height;
}
/*
int getHeight(struct node* root) {
    // Write your code here
if(root==NULL)
{
    return -1;

}
else 
{
    int left,right,height;

    left=getHeight(root->left);
    right=getHeight(root->right);

if(left>right)

{
    height=left+1;
}
else
{ 
height=right+1;
}
return height;
}
}
*/

int main()
{
	struct node *root;
	root = NULL;
	root = insert(root,30);
	root = insert(root,25);
	root = insert(root,20);
	root = insert(root,40);

	int n;
	printf("Enter the search element ");
	scanf("%d",&n);

	if(search(root,n) == true)
	{
		printf("true");
		
	}
	else
	{
		printf("false");
	}

int u;
u=findmin(root);

printf("%d",u);

int g;

g=findmax(root);

printf("%d",g);

int l;

l=findheight(root);
printf("%d",l);
	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
