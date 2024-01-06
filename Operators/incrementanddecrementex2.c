#include<stdio.h>
int main()
{
	int a,n;
	printf("Enter a value\n");
	scanf("%d",&a);
	n=a++;
	printf("a=%d\tn=%d\n",a,n);
	n=++a;
	printf("a=%d\tn=%d\n",a,n);
	n=a--;
	printf("a=%d\tn=%d\n",a,n);
	n=--a;
	printf("a=%d\tn=%d\n",a,n);
	return 0;
}