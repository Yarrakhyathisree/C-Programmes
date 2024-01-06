#include<stdio.h>
int main()
{
	int rev=0,r,n,temp;
	printf("enter the value of n:");
	scanf("%d",&n);
	temp=n;
	while(n>0) 
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==temp)
	printf("the given number is palindrome");
	else
	printf("the given number is not palindrome");
}
