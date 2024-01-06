#include<stdio.h> 
int main()
{
	//area and circumfrance of a circle
	float r,area,c,pi=3.1415;
	r=2.6;
	area=pi*r*r;
	c=2*pi*r;
	printf("The area of circle=%f\n",area);
	printf("The circumfrance of circle=%f",c);
	return 0;
}