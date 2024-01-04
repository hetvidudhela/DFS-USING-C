/*	
				perform bubble sort using array 
				code by: hetvi dudhela

*/
#include<stdio.h>
#include<conio.h>

void bubble(int a[])
{
	int i,j,temp;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n after shorting :");
	for(i=0;i<=4;i++)
	{
		printf("%d  ",a[i]);
	}
}

void main()
{
	int a[5],i,j;
	clrscr();
	printf("\n enter 5 element :");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble(a);
	getch();
}