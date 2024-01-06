//WAP to access 2-D array using pointers (pointer to array)
#include<stdio.h>
int main()
{
	int a[4][4],i,j,m,n,(*ptr)[4]=a;//pointer to array
    printf("Enter the row size and coloum size:");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix elements:");
    for(i=0;i<m;i++)
	{
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",*(ptr+i)+j);
		}
	}
	printf("The matrix elements are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(*(ptr+i)+j));
		}
		printf("\n");
	}
	return 0;
}
