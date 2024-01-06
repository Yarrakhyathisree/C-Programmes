#include<stdio.h>
int main()
{
	
	int a,b,c,d,e,f;
	printf("Enter a,b,c,d,e,f values");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&c,&d);
	if (a>b&&a>c&&a>d&&a>e&&a>f)
	printf("a is big");
	else if (b>c&&b>d&&b>e&&b>f)
	printf("b is big"); 
	else if (c>d&&c>e&&c>f)
	printf("c is big");
	else if (d>e&&d>f)
	 printf("d =%d is big",d);
	else if (e>f)
	printf("e is big");
	else 	
	printf("f is big");
	return 0;
}
