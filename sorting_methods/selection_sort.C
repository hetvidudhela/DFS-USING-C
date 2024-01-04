/*
		perform selection sort using array
		code by:hetvi dudhela

*/

#include<stdio.h>
#include<conio.h>
void  selection(int a[])
{
	int temp;
	int i,j,min;
	for(i=0;i<4;i++)
	{
		min=i;
		for(j=i+1;j<=4;j++)
		{
			if(a[min]<a[j])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\n after shorting");
	for(i=0;i<=4;i++)
	{
		printf("%d  ",a[i]);
	}
}

void main()
{
	int a[5],i,j;
	clrscr();
	printf("\enter element :");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a);
	getch();
}
