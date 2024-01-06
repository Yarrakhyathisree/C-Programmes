#include<stdio.h>
main()
{
	//check the num is even or odd
	int n,rem;
	printf("Enter n value \n");
	scanf("%d",&n);
	rem=n%2;
	switch(rem)
	{
		case 0:printf("The given n value is even");
				break;
		case 1:printf("The given n value is odd");
				break;
		
	}
}
