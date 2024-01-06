#include<stdio.h>
int countdigits(int);
int isArmstrong(int);
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	if(isArmstrong(n))
	printf("%d is armstrong number",n);
	else
	printf("%d is not armstrong number",n);
}
int countdigits(int n)
{
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
		return count;
}
int isArmstrong(int n)
{
	int temp=n,r,sum=0,dc;
	dc=countdigits(n);
	while(n>0)
	{
		r=n%10;
		sum=sum+pow(r,dc);
		n=n/10;
	}
	if(sum==temp)
	return 1;
	else 
	return 0;
}

