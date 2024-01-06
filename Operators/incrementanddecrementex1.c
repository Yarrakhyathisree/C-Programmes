#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("\n Positive number=%d",+num);
	printf("\n Negative number=%d",-num);
	printf("\n Positive number=%d",+(+num));
	printf("\n Negative number=%d",+(-num));
	printf("\n Positive number=%d",-(-num));
	printf("\n Negative number=%d",-(+num));
	return 0;

}