/*
		perform shell sort using array
		code by:hetvi dudhela

*/


#include<stdio.h>
#include<conio.h>
void shell(int a[])
{
	int gap,i,j;
	for(gap=10/2;gap>=1;gap/2)
	{
		for(j=gap;j<=10-1;j++)
		{
			for(i=j-gap;i>=0;i-1)
			{
				if(a[i+gap]>a[i])
				{
					break;
				}
				temp=a[i+gap];
				a[i+gap]=a[i];
				a[i]=gap;
			}
		}
	}
	printf("\n short ..")
	for(i=0;i<=10-1;i++)
	{
		printf("%d  ",a[i]);
	}
}
}
void main()
{
	int a[10],i,j;
	clrscr();
	printf("\n enter array :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	shell(a);
	getch();
}
