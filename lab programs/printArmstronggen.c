#include<stdio.h>
#include<math.h>
int countdigits(int);
int isArmstrong(int);
void printArmstrong(int);
int main()
{
	int end;
	printf("enter the end value:");
	scanf("%d",&end);
	printArmstrong(end);
	return 0;
}
void printArmstrong(int end)
{
	int i;
	printf("the armstrong numbers between one to end are:");
	for(i=1;i<=end;i++)
	{
		if(isArmstrong(i))
		printf("%d\t",i);
	}
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
