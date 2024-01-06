#include<stdio.h> 
int main()
{
	//surface area and volume of a sphere
	float r,sa,v,pi=3.1415;
	r=6.1;
	sa=4*pi*r*r;
	v=1.33*pi*r*r*r;
	printf("surface area of sphere=%f\n",sa);
	printf("volume=%f",v);
	return 0;
}