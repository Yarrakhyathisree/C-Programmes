#include<stdio.h>
int main()
{
	int a=10;
	printf("The value of a=%d",a);
	printf("The address of a=%u",&a);
	printf("the value of a=%d",*(&a));
	printf("the address of a=%d",&*(&a));
	printf("the value of a=%d",*&*(&a));
	return 0;
}
