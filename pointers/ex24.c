#include<stdio.h>
#include<stdlib.h>
//DMA using 1-d array reading and printing 
int main()
{
	int n,i,*ptr,sum=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL)	
	{
	printf("unable to allocate memory");
	exit(0);
    } 
	//read a 1-d array
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",ptr+i);
	//print a 1-d array
	printf("The elements are:");
	for(i=0;i<n;i++)
	{
	printf("%d",*(ptr+i));
	sum=sum+*(ptr+i);
    }  
    printf("sum=%d",sum);
    free(ptr);
    return 0;
}
