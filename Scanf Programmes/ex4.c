#include<stdio.h>
int main()
{
	int a,b;
	float c,d;
	printf("Enter two integer values:");
	scanf("%d%d",&a,&b);
	printf("Enter two float values:");
	scanf("%f%f",&c,&d);
	printf("a=%db=%dc=%fd=%f",a,b,c,d);
	return 0;
}