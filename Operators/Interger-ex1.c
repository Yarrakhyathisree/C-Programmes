#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a and b value:");
	scanf("%d%d",&a,&b);
	printf("\nAddition=%d",a+b);
	printf("\nSubtraction=%d",a-b);
	printf("\nMultiplication=%d",a*b);
	printf("\nDivision=%d",a/b);
	printf("\nModulus=%d",a%b);
	return 0;
}