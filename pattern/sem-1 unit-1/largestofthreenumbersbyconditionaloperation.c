#include<stdio.h>
int main()
{
   /*Write a program to find the largest of three given numbers using conditional operator*/
   int a,b,c,big;
   printf("enter three numbers:");
   scanf("%d%d%d",&a,&b,&c);
   
   printf("the biggest number is =%d", a>b? ( a>c?a:c):(b>c?b:c));
   return 0;
	
}
