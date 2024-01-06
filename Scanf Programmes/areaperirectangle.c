#include<stdio.h>
int main()
{
	int l,b,area,perimeter;
	printf("Enter length:");
	scanf("%d",&l);	
	printf("Enter breadth:");
	scanf("%d",&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("The area of rectangle is %d\n",area);
	printf("The perimeter of rectangle is %d",perimeter);
	return 0;
	
}
