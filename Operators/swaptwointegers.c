#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swap a=%d\tb=%d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swap a=%d\tb=%d",a,b);
	return 0;
	
}
