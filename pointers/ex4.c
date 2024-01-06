#include<stdio.h>
int main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("the valu of a=%d\n",a);
	printf("the value of a=%d\n",*(&a));
	printf("the value of a=%d\n",*ptr);
	printf("the address of a=%u\n",&a);
	printf("the address of a=%u\n",ptr);
	printf("the address of a=%u\n",*(&ptr));
	return 0;
}
