//print natural number in reverse n to 1 in given range 
#include<stdio.h>
int main()
{
	int i,start,end;
	printf("enter the start value:");
	scanf("%d",&start);
	printf("enter the end value:");
	scanf("%d",&end);
	for(i=start;i>=end;i--)
	{
		printf("%d\n",i);
	}
	return 0;
}
