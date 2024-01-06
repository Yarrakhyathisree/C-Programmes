//linear search using DMA or dynamic 1-D array 
#include<stdio.h>
void read(int *,int);
void display(int *,int);
int linearsearch(int *,int);
int main()
{
	int *ptr,poss,n;
	printf("Enter the number of elements to allocate memory:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int ));
	read(ptr,n);
	display(ptr,n);
	poss=linearsearch(ptr,n);
	if(poss==-1)
	printf("Element is not found");
	else
	printf("The element is found at position=%d",poss);
}
void read(int *ptr,int n)
{
	int i;
	printf("enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",ptr+i);
}
void display(int *ptr,int n)
{
	int i;
	printf("the elements are:");
	for(i=0;i<n;i++)
	printf("%d",*(ptr+i));
}
int linearsearch(int *ptr,int n)
{
	int i,flag=0,key;
	printf("Enter the element to be searched:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	if(*(ptr+i)==key)
	{
		flag==1;
		return i+1;
	}
	return -1;
}
	
}
