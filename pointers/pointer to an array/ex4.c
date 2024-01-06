#include<stdio.h>
//read and display sum of the array elements using functions
void display(int *,int);
void sum(int*,int);
void read(int *,int);
int main()
{
	int a[10],n,i,*ptr;
	ptr=a;
	printf("Enter the array size:");
	scanf("%d",&n);
	read(a,n);
	display(a,n);
	sum(a,n);
	return 0;
}
void read(int *ptr,int n)
{
    int i;
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",ptr+i);
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


