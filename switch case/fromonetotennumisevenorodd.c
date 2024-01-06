#include<stdio.h>
int main()
{
	//accept a num from 1to10 print whether the num is even or odd
	int num,rem;
	printf("\n Enter any number 1to10");
	scanf("%d",&num);
	rem=num%2;
	switch(rem)
	{
		case 0:
			printf("\n Even");
			break;
		case 1:
			printf("\n Odd");
			break;
			
	}
	return 0;
}
	
