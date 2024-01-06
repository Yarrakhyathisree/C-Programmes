#include<stdio.h>
main()
{
	//find the number is + or - and even or odd
	int n,ch;
	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:if (n>=0)
		printf("%d is positive",n);
		else 
		printf("%d is negative",n);
		break;
		case 2:if (n%2==0)
		printf("%d is even",n);
		else
		printf("%d is odd",n);
		break;
		default:printf("No condition is satisified");
		
		
	}
}
