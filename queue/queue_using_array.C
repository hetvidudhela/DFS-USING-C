/*
			perform queue operation using array
			*enqueue
			*dequeue

			code by :hetvi dudhela

*/


#include<conio.h>
#include<stdio.h>
int front=-1;
int rear=-1;
int stack[5];
void enqueue(int x)
{
	if(rear==5-1)
	{
		printf("queue is overflow");
	}
	else if(rear==-1&&front==-1)
	{
		rear++;
		front++;
		stack[rear]=x;
	}
	else
	{
		rear++;
		stack[rear]=x;
	}
}
void dequeue()
{
	int x;
	if(front==-1&&rear==-1)
	{
		printf("underflow");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		x=stack[front];
		printf("deleted element is %d",x);
		front++;
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf(" %d   ",stack[i]);
	}
}
void main()
{
	int x;
	int ch;
	clrscr();

	printf("1;-enqueue");
	printf("\n 2;-dequeue");
	printf("\n 3:-display");
	do
	{
		printf("\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter value :");
				scanf("%d",&x);
				enqueue(x);
			break;

			case 2:
				dequeue();
			break;

			case 3:
				display();
			break;

			default:
			break;
		}
	}while(ch!=0);
	getch();
}
