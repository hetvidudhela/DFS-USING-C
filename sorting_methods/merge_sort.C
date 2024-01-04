/*
			perform merge sort using array
			code by:hetvi dudhela

*/


#include<stdio.h>
#include<conio.h>
void mrege_sort(int a[],int lb,int ub)
{
	int mig;
	if(lb<ub)
	{

		mid=(lb+ub)/2;
		merge_sort(a,lb,mid);
		mrege_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
void mereg(int a[],int lb,int mid,int ub)
{
	int i=lb;
	int k=lb;
	intj=mid+1;
	int b[10];

	while(i<=mid&&j<=ub)
	{
		if(a[i]>=a[j])
		{
			b[k]=a[j];
			j++;
			k++;
		}
		else
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
		      b[k] =a[i];
		      k++;
		      i++;
		}
	}
	for(i=lb;i<=ub;i++)
	{
		a[i]=b[i];
	}
}
void main()
{
	int a[10],i;
	clrscr();
	printf("\enter element :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,9);
	printf("\n sorting ...");
	for(i=0;i<=9;i++)
	{
		printf("%d",a[i]);
	}
getch();
}