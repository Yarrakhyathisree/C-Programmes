#include<stdio.h> 
int main()
{
	float r,h,sa,v,pi=3.1415;
	r=2;
	h=2.5;
	sa=2*pi*r*(r+h);
	v=pi*r*r*h;
	printf("surface area of cylinder=%f\n",sa);
	printf("volume=%f",v);
	return 0;
}