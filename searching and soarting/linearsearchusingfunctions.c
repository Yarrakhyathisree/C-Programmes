#include<stdio.h>
void linearsearch(int [],int);
int main()
{
	int a[10],i,n;//compile time initilization
	printf("Enter the size of an array:");
	scanf("%d",&n);
	printf("Enter the elements of an array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	linearsearch(a,n);
}
void linearsearch(int a[],int size)
{
	int flag=0,searchkey,i;
	printf("Enter the element to be searched:");
	scanf("%d",&searchkey);
	for(i=0;i<size;i++)
	{
		if(a[i]==searchkey)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("the element is found at postion=%d",i+1);
	else 
	printf("the element is not found");
}
