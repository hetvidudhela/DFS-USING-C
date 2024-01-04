/*	
			perform stack operation (using array)
			*push 
			*pop
			*peep
			*display

			code by :hetvi dudhela
*/


#include<stdio.h>
#include<conio.h>
//#define n 5
int stack[5];
int top=-1;
void push()
{
	int x;
	printf("enter data :");
	scanf("%d",&x);
	if(top==5-1)
	{
		printf("stack is overflow");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
		item=stack[top];
		top--;
		printf("poped element is : %d",item);
	}
}
void peek()
{
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
		printf("%d",stack[top]);
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d  ",stack[i]);
	}
}
void main()
{
	int ch;
	clrscr();
	printf("\n 1:- push oeration");
	printf("\n 2:- pop operation");
	printf("\n 3:- peek operation");
	printf("\n 4:- display operation");

	do
	{
		printf("\n enter your choice in beteween 1 to 4  : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
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
//				printf("\n invalid element");
			break;
		}

	}while(ch!=0);
getch();
}
