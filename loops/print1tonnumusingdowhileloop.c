//print 1 to n numbers using do-while loop
//note:take the inputs from the keyboard
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number from 1 to n:");
	scanf("%d",&n);
	do
	{
		printf("%d",i);
		i++;
	}while(i<=n);
	return 0;
}
