#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the value:");
	scanf("%c",&ch);
	if (ch>='A'&&ch<='Z')
	printf("the given character is in uppercase");
	else if(ch>='a'&&ch<='z')
	printf("the given character is in lower case");
	else if(ch>='0'&&ch<='9')
	printf("the given character is a digit");
	else 
	printf("the given value is a special character");
	return 0;
}
