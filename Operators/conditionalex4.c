#include<stdio.h>
main()
{
	int c=0,d=5,e=10,a;
	a=c>1?d>1||e>1?100:200:300;
	printf("a=%d",a);
	return 0;
}