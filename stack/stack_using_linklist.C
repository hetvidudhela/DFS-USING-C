/*	
			perform stack operation (using single link list)
			*push 
			*pop
			*peep
			*display

			code by :hetvi dudhela
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int x)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	struct node *temp;
	temp=top;
	if(top==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		printf("poped element is %d",top->data);
		top=top->next;
		free(temp);
	}
}
void peek()
{
	if(top==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		printf("peek element is %d",top->data);
	}
}
void display()
{
	struct node *temp=top;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
}
void main()
{
	int ch,x;
	clrscr();
	printf("\n 1:- push oeration");
	printf("\n 2:- pop operation");
	printf("\n 3:- peek operation");
	printf("\n 4:- display operation");

	do
	{
		printf("\n enter your choice in beteween 0 to 4   : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("enter the value  : " );
			scanf("%d",&x);
				push(x);
			break;

			case 2:
				pop();
			break;

			case 3:
				peek();
			break;

			case 4:
				display();
			break;

			default:
				printf("\n thank you....");
			break;
		}

	}while(ch!=0);
getch();
}
