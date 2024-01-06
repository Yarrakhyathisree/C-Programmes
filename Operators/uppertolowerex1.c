#include<stdio.h>
main()
{
	char alpha;
	printf("Enter any uppercase aphabet:");
	scanf("\n%c",&alpha);
	printf("\nlowercase alphabet=%c",alpha|32);
	return 0;
}