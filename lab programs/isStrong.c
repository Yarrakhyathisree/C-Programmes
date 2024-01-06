#include<stdio.h>
int isStrong(int);
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	if(isStrong(n))
	printf("%d is strong number",n);
	else
	printf("%d is not a strong number",n);
}
int isStrong(int n)
{
	int temp=n,i,r,fact,sum=0;
	while(n>0)
	{
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;	
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	return 1;
	else 
	return 0;
	
}
