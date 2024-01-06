#include<stdio.h>
int main()
{
	//vowel or not 
	char ch;
	printf("Enter a alphabet:");
	scanf("%c,&ch");
	if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	printf("The given value is vowel");
	else
	printf("The given value is not vowel");
	return 0;
}
