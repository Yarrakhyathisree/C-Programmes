#include<stdio.h>
int main()
{
	typedef int height;
	height h,h1,h2;
	printf("Enter h1,h2 values");
	scanf("%d%d",&h1,&h2);
	h=h1+h2;
	printf("total height =%d",h);
	return 0;
}