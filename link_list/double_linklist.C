	/*
				perform all operation on double link list
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
	struct node *next;
	struct node *prev;
	int data;
};
struct node *temp;
struct node *head=NULL;
struct node *newnode;
struct node *tail;
void create()
{
	int ch=1;
	while(ch)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data  : ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=tail=newnode;
		}
		else
		{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
		printf("do you want to add node[0/1]  : ");
		scanf("%d",&ch);
	}
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
}
void ins_first()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nenter data  : ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->prev=NULL;
	newnode->next=head;
	head->prev=newnode;
	head=newnode;
}
void ins_last()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nenter data  : ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->prev=NULL;
	tail->next=newnode;
	newnode->prev=tail;
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
		/*newnode->next=temp->next;
		temp->next->prev=newnode;
		temp->next=newnode;
		newnode->prev=temp;  */
		temp->next->prev=newnode;
		temp->next=newnode->next;
		temp->next=newnode;
		newnode->prev=temp;
	      /*	newnode->prev=temp;
		newnode->next=temp->next;
		temp->next->prev=newnode;
		temp->next=newnode;  */
	}
}
void del_first()
{
	temp=head;
	head->next->prev=NULL;
	head=head->next;
	free(temp);
}
void del_last()
{
	temp=tail;
	tail->prev->next=NULL;
	tail=tail->prev;
	free(temp);
}
void del_sp()
{
	int pos;
	int i=1;
	temp=head;
	printf("\n enter position  : ");
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
void search()
{

	int flage=0;
	int data;
	temp=head;
	printf("\n enter data you want to search");
	scanf("%d",&data);
	while(temp!=NULL)
	{
		if(data==temp->data)
		{
			flage=1;
		}
		temp=temp->next;
	}
	if(flage==1)
	{
		printf("\n node is found");
	}
	else
	{
		printf("\n node is not found");
	}
}
void main()
{
	int ch;
	clrscr();
	create();

	printf("1 :-display");
	printf("\n2 :-insert first");
	printf("\n 3 :-insert last");
	printf("\n 4:-insert before");
	printf("\n 5 :- insert after");
	printf("\n 6:-delete first");
	printf("\n 7:-delete last");
	printf("\n 8:-delete specific");
	printf("\n 9 :-search");
	printf("\n enter your choice 1 to 9  : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
      //			create();
			display();
		break;

		case 2:
			ins_first();
			display();
		break;

		case 3:
			ins_last();
			display();
		break;

		case 4:
			ins_before();
			display();
		break;

		case 5:
			ins_after();
			display();
		break;

		case 6:
			del_first();
			display();
		break;

		case 7:
			del_last();
			display();
		break;

		case 8:
			del_sp();
			display();
		break;

		case 9:
			search();
		break;

		default:
		break;
	}
getch();
}







