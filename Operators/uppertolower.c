#include<stdio.h>
int main()
{
	
	char ch;
	printf("\n Enter any Upper case alphabet:");
	scanf(" %c",&ch);
	ch=ch+32;
	printf("\nlower case alphabet:%c\n",ch);
	return 0;
}