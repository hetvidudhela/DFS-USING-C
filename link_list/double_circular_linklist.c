	/*
				perform all operation on double  circular link list
				*create list
				*insert_first
				*insert_last
				*insert_specific
				*delete_first
				*delete_last
				*delete_specific
				*searching
				*reverseing

				code by: hetvi dudhela
	
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
struct node *temp;
struct node *newnode;
struct node *head=NULL;
struct node *tail;
void create()
{
	int ch=1;
	while(ch)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter data :");
		scanf("%d",&newnode->data);
		newnode->prev=NULL;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=tail=newnode;
			head->next=head;
			head->prev=head;
		}
		else
		{
			newnode->prev=tail;
			tail->next=newnode;
			newnode->next=head;
			head->prev=newnode;
			tail=newnode;
		}
		printf("\n do you want to do continue[0/1]  : ");
		scanf("%d",&ch);
	}
}
void del_first()
{
	temp=head;
	head->next->prev=tail;
	tail->next=head->next;
	head=head->next;
	free(temp);
}
void del_last()
{
	temp=tail;
	tail->prev->next=head;
	head->prev=tail->prev;
	tail=tail->prev;
	free(temp);
}
void del_sp()
{
	int pos,i=1;
	temp=head;
	printf("enter position you want to delete");
	scanf("%d",&pos);
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	if(pos==1)
	{

		del_first();
	}
	else
	{
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	}
}
void ins_first()
{

	newnode=(struct node *)malloc(sizeof(struct node));
		printf("\n enter data :");
		scanf("%d",&newnode->data);
		newnode->prev=NULL;
		newnode->next=NULL;
		newnode->next=head;
		newnode->prev=tail;
		head->prev=newnode;
		tail->next=newnode;
		head=newnode;
}
void ins_last()
{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\n enter data :");
		scanf("%d",&newnode->data);
		newnode->prev=NULL;
		newnode->next=NULL;
		newnode->next=head;
		newnode->prev=tail;
		tail->next=newnode;
		head->prev=tail;
		tail=newnode;
}
void ins_before()
{

	int pos;
	int i=1;
	temp=head;
	printf("\nenter position  : ");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nenter data  : ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->prev=NULL;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	if(pos<1)
	{
		printf("\n invalid position");
	}
	else if(pos==1)
	{
		ins_first();
	}
	else
	{
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next->prev=newnode;
		temp->next=newnode;
	}
}
void ins_after()
{

	int pos;
	int i=1;
	temp=head;
	printf("\nenter position  : ");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nenter data  : ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->prev=NULL;
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	if(pos<1)
	{
		printf("\n invalid position");
	}
	else
	{
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next->prev=newnode;
		temp->next=newnode;
	}
}
void display()
{
	temp=head;
	do
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=head);
}
void main()
{
	int ch;
	clrscr();
	create();
	printf("\n 1:- display");
	printf("\n 2:-delete first");
	printf("\n 3:-delete last");
	printf("\n 4:-delete specific location");
	printf("\n 5:- inserte first");
	printf("\n 6:- inserte last");
	printf("\n 7:-insert before");
	printf("\n 8 :- insert after");
	printf("\n enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("list is ...\n");
			display();
		break;

		case 2:
			printf("list is ...\n");
			display();
			del_first();
			printf("\n after delete  first ...\n");
			display();
		break;

		case 3:
			printf("list is ...\n");
			display();
			del_last();
			printf("\n after delete last ...\n");
			display();
		break;

		case 4:
			printf("list is ...\n");
			display();
			printf("\n after delete from specific position ...\n");
			del_sp();
			display();
		break;


		case 5:
			printf("list is ...\n");
			display();
			ins_first();
			printf("after inserte first ...\n");
			display();
		break;

		case 6:
			printf("list is ...\n");
			display();
			ins_last();
			printf("after inserte last ...\n");
			display();
		break;

		case 7:
			printf("list is ...\n");
			display();
			ins_before();
			printf("after inserte before any position ...\n");
			display();
		break;

		case 8:
			printf("list is ...\n");
			display();
			ins_after();
			printf("after inserte after any position ...\n");
			display();

		break;

		default:
		break;
	}
getch();
}
