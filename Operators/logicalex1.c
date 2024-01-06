#include<stdio.h>
int main()
{
	int x,y,z;
	x=y=z=1;
	z=++x||++y&&++z;
	printf("%d%d%d",x,y,z);
	return 0;
}