#include<stdio.h>
main()
{
	//accept a num from 1to10 print whether the num is even or odd
	int num;
	printf("\n Enter any number 1 to 10:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			printf("\n ODD");
			break;
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		printf("\n EVEN");
		default:
	    	printf("\n INVAILD INPUT");
			break;			
	}
	return 0;
}
