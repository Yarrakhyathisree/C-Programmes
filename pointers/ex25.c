#include<stdio.h>
#include<stdlib.h>
//passing a pointer to function to read and display 1-d array
void read(int *,int);
void display(int *,int);
int main()
{
	int n,*ptr;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL){
	printf("unable to allocate memory");
	exit(0);
	}
	read(ptr,n);
	display(ptr,n);
	free(ptr);
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
	printf("the elements are");
	for(i=0;i<n;i++)
	printf("%d",*(ptr+i));
}

