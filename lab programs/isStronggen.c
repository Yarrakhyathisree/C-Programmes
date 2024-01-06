#include<stdio.h>
int isStrong(int);
void printstrong(int);
int main()
{
	int end;
	printf("enter the value of end:");
	scanf("%d",&end);
	printstrong(end);
}
void printstrong(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(isStrong(i))
		printf("%d\t",i);
	}
	
}
int isStrong(int n)
{
	int temp=n,i,fact,r,sum=0;
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
