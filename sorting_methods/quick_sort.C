/*
		perform quick sort using array(recursive method)
		code by:hetvi dudhela
*/


#include<stdio.h>
#include<conio.h>
int partition(int a[],int lb,int ub)
{
	int key=a[lb];
	int start=lb;
	int end=ub;
	int temp;

	while(start<end)
	{
		while(a[start]<=key)
		{
			start++;
		}
		while(a[end]>key)
		{
			end--;
		}
		if(start<end)
		{
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
	}
	temp=a[lb];
	a[lb]=a[end];
	a[end]=temp;

	return end;
}
void quick_sort(int a[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=partition(a,lb,ub);
		quick_sort(a,lb,loc-1);
		quick_sort(a,loc+1,ub);
	}
}
void main()
{
	int a[10],i;
       /*	void quick_sort(int[],int,int);
	int partition(int[],int,int);      */
	clrscr();
	printf("\n enter element");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	partition(a,0,9);
	quick_sort(a,0,9);
	printf("\n shorting....");
	for(i=0;i<=9;i++)
	{
		printf("%d  ",a[i]);
	}
getch();
}
/*void main()
{
	int a[10],i;
	clrscr();
	printf("enter element");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	partition(a,0,9);
	quick_sort(a,0,9);
	printf("\n after shorting....");
	for(i=0;i<=9;i++)
	{
		printf("%d  ",a[i]);
	}
getch();
} */