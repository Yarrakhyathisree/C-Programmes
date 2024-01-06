//WAP to access 2-D array using pointers (array of pointers)using DMA
#include<stdio.h>
void read(int **,int,int);
void display(int **,int,int);
int main()
{
	int i,j,m,n,*ptr[5];
    printf("Enter the row size and coloum size:");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    ptr[i]=(int *)malloc(n*sizeof(int));
    read(ptr,m,n);
    display(ptr,m,n);
    return 0;
}
void read(int *ptr[5],int m,int n)
{
    int i,j;
    printf("Enter the matrix elements:");
    for(i=0;i<m;i++)
	{
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",(ptr[i])+j);
		}
	}
}
void display(int *ptr[5],int m,int n)
{
	int i,j;
	printf("The matrix elements are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(ptr[i]+j));
		}
		printf("\n");
	}
}

