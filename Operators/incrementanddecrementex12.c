#include<stdio.h>
int main()
{
	int i=3,j;
	j=++i*++i*++i;
	printf("i=%d j=%d",i,j);
	return 0;
}