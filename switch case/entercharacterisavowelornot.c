#include<stdio.h>
main()
{
	//check eneterd character is a vowel or not
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		case 'a':
			printf("\n%c is vowel",ch);
			break;
		case 'E':
		case 'e':
			printf("\n%c is vowel",ch);
			break;
		case 'I':
		case 'i':
			printf("\n%c is vowel",ch);
			break;
		case 'O':
		case 'o':
			printf("\n%c is vowel",ch);
			break;
		case 'U':
		case 'u':
			printf("\n%c is vowel",ch);
			break;
		default :printf("%c is not vowel",ch);	
			
	}
	return 0;
}
