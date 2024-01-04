/*
		perform tree operation using link list
		* creation
		*traversal
			#perorder
			#postorder
			#inorder
		
		code by:hetvi dudhela
		

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *create()
{
	int x;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf(" enter data -1 for no node  \n:");
	scanf("%d",&x);
	if(x==-1)
	{
		return NULL;
	}
	newnode->data=x;
	printf("\n enter left child of %d",x);
	newnode->left=create();
	printf("\n enter right child of %d",x);
	newnode->right=create();
	return newnode;
}
void preorder(struct node *root)
{
       //	printf("preorder....\n");
	if(root==0)
	{
		return ;
	}
	printf("%d  ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root)
{
       //	printf("\n");
	if(root==0)
	{
		return ;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d",root->data);
}
void inorder(struct node *root)
{
      //	printf("\n");
	if(root==0)
	{
		return ;
	}
	inorder(root->left);
	printf(" %d",root->data);
	inorder(root->right);
}
void main()
{
	struct node *root;
	clrscr();
	root=NULL;
	root=create();
	preorder(root);
	postorder(root);
	inorder(root);
	getch();
}
