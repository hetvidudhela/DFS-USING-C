/*
			perform queue opearation using double link list
			*enqueue
			*dequeue


			code by:hetvi dudhela


*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *front=NULL;
struct node *newnode;
struct node *rear=NULL;
void enqueue(int x)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	newnode->prev=NULL;

	if(front==NULL&&rear==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		newnode->prev=rear;
		rear=newnode;
	}
}
void dequeue()
{
	struct node *temp;
	temp=front;
	if(front==NULL&&rear==NULL)
	{
		printf("queue is empty");
	}
	else
	{
		front=front->next;
		free(temp);
	}
}
void display()
{
	struct node *temp=front;
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
	printf("1:-enqueue");
	printf("\n 2:-dequeue");
	printf("\n 3:-display");
	do
	{
		printf("\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n enter data:");
				scanf("%d",&x);
				enqueue(x);
				display();
			break;

			case 2:
				dequeue();
				display();
			break;

			case 3:
				display();
			break;

			default:
			break;
		}
	}while(ch!=0);
}

