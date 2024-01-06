#include<stdio.h>
int main()
{
	int x=0,y=1;
	y=!x;
	x=!y;
	printf("%d %d",x,y);
	return 0;
} 