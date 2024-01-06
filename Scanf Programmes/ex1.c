#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%f",&b);
	printf("Enter c value:");
	scanf(" %c",&c);
	printf("a=%d\nb=%f\nc=%c\n",a,b,c);
	return 0;
	
}