#include<stdio.h>
int main()
{
	int x=3,z;
	z=x/++x;
	printf("x=%dz=%d",x,z);
	return 0;
}