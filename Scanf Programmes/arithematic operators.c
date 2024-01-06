#include<stdio.h>
int main ()
{
	int a,b;
	float c,d;
	printf("Enter two integer values:\n");
	scanf("%d%d",&a,&b);
	printf("Enter two float values:\n");
	scanf("%f%f",&c,&d);
	printf("%d%d=%d\n",a,b,a/b);
	printf("%f%f=%f\n",c,a,c/d);
	printf("%f%d=%f\n",c,a,c/a);
	return 0;
	
}