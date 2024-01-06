#include<stdio.h>
//the area and perimeter of rectangle
int main()
{
	int l,b,area,perimeter;
	l=3;
	b=4;
	area=l*b;
	perimeter=2*(l+b);
	printf("The area of rectangle=%d",area);
	printf("The perimeter of rectangle=%d",perimeter);
	return 0;
}