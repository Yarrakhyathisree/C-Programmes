#include<stdio.h>
//palindrome of given numbers
int main()
{
	int r,rev,n,start,stop,temp;
	printf("enter the value of start and stop:");
	scanf("%d%d",&start,&stop);
	while(start<=stop)
	{
	temp=start,n=start,rev=0;
	while(n>0)
	{
		
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==temp)
	printf("%d \t",rev);
	start++;
	
}}
