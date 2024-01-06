#include<stdio.h>
 int main()
{
	/*Enter a number from 1t07 and display the corresponding day of week by using the switch case*/
	int day;
	printf("Enter an number between 1 to 7\n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:printf("MONDAY");
		       break;
		case 2:printf("TUESDAY");
	           break;
		case 3:printf("WEDNESDAY");
		       break;
		case 4:printf("THURSDAY");
	           break;
		case 5:printf("FRIDAY");
		       break;
		case 6:printf("SATURDAY");
		       break;
		case 7:printf("SUNDAY");
		       break;
	    default:printf("Invalid week day\n");
	}
	return 0;
}
