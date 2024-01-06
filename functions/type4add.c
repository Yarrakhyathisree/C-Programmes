#include<stdio.h>
//type-4 - with  arguments and  with return 
int  add(int,int);//function declaration
int main()
{
    int a,b,sum;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
   sum=add(a,b);//function call
   printf("sum=%d",sum);

}
int add(int a1,int b1)//funtion body
{
	int c;
	c=a1+b1;
	return c;
}
