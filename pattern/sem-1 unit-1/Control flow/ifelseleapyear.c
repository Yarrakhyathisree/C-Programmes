#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year:");
	scanf("%d",&year);
	if((year%4==0)&&((year%100==0||year%400==0)))
	printf("\nleap year");
	else print("\n not a leap year");
	return 0;
}
