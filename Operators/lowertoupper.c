#include<stdio.h>
int main()
{
	
	char ch;
	printf("\n Enter any lower alphabet:");
	scanf(" %c",&ch);
	ch=ch-32;
	printf("\nUpper case alphabet:%c\n",ch);
	return 0;
}