//print 1 to n numbers using while loop
//note:take the inputs from the keyboard
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number from 1 to n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",i);
		i++;
	}
	return 0;
}
