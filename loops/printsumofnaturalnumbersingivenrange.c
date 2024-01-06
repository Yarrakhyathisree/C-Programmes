//print sum of natural numbers in given range 
#include<stdio.h>
int main()
{
	int i,start,end,sum=0;
	printf("enter the start value:");
	scanf("%d",&start);
	printf("enter the end value:");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		sum=sum+i;
	}
	printf("sum of natural numbers=%d\n",sum);
	return 0;
}
