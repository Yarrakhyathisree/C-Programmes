#include<stdio.h>
//type-3 - with  arguments and  no return 
void add(int,int);//function declaration
int main()
{
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
	add(a,b);//function call

}
void add(int a1,int b1)//funtion body
{
	int c;
	c=a1+b1;
	printf("The value of c=%d",c);
}
