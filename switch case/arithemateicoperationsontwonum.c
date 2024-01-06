#include<stdio.h>
main()
{
	/*read 2 num and perform ap operations on those 2num based on given operator*/
	int a,b;
	char operator;
	printf("Enter 2 numbers \n");
	scanf("%d%d",&a,&b);
	printf("Enter your choice \n");
	printf("+addition\n -subtraction\n *multiplication\n /division\n %modulardivison");
	scanf("%c",operator);
	switch(operator)
	{
		case '+':printf("%d+%d=%d\n",a,b,a+b);
				break;
		case '-':printf("%d-%d=%d\n",a,b,a-b);
				break;
		case '*':printf("%d*%d=%d\n",a,b,a*b);
				break;
		case '/':printf("%d/%d=%d\n",a,b,a/b);
				break;
		case '%':printf("%d%%d=%d\n",a,b,a%b);
				break;
		default:printf("Invaild operator\n");
	}
}
				
	

