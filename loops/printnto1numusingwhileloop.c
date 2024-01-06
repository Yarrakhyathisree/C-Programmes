//print n to 1 numbers using while loop
//note:take the inputs from the keyboard
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(n>=i)
	{
		printf("%d\n",n);
		n--;
	}
	return 0;
}
