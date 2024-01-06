#include<stdio.h>
int main()
{
	int a=10,*iptr;
	float b=4.4,*fptr;
	iptr=&a;
	fptr=&b;
	printf("address of a=%u\n",&a);
	printf("address of a=%u\n",iptr);
	printf("value of a=%d\n",a);
	printf("value of a=%d\n",*iptr);
	printf("address of b=%u\n",&b);
	printf("address of b=%u\n",fptr);
	printf("value of b=%f\n",b);
	printf("value of b=%f\n",*fptr);
	return 0;
}
