#include<stdio.h>
//read and display sum of the array elements using functions
void display(int *,int);
void sum(int*,int);
int main()
{
	int a[10],n,i,*ptr;
	ptr=a;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	display(ptr,n);
	sum(ptr,n);
}
void display(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",*(ptr+i));
}
void sum(int *ptr,int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	sum=sum+*(ptr+i);
}


