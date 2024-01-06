//example on double pointers
#include<stdio.h>
int main()
{
	int a=98;
	int *ptr1=&a;//ptr1=&a;
	int **ptr2=&ptr1;//ptr2=&ptr1;
	printf("value of a=%d\n",a);
	printf("value of a using single pointer=%d\n",*ptr1);
	printf("value of a using double pointer=%d\n",**ptr2);
	return 0;
}
