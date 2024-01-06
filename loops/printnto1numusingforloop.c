//print n to 1 numbers using for loop
//note:take the inputs from the keyboard
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	printf("%d\n",i);
	return 0;
}
