/*
				perform insertion sort using array 
				code by: hetvi dudhela

*/
#include<stdio.h>
#include<conio.h>
void insertion(int a[])
{
	int i,j,temp;
	for(i=1;i<=4;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\n after shorting :");

	for(i=0;i<=4;i++)
	{
		printf("%d  ",a[i]);
	}
}
void main()
{
	int a[5],i,j,n;
	clrscr();
     //	printf("enter n val");
       //	scanf("%d",&n);
	printf("\n enter 5 element :");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion(a);
	getch();
}