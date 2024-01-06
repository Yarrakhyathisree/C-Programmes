#include<stdio.h>
//type-3 -with argument and no return 
//type-3 -float add
void add(float,float,float);
int main()
{
	float a,b,c;
	printf("Enter the values of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	add(a,b,c);
	return 0;
}
void add(float a,float b,float c)
{
printf("sum of a,b and c=%f",(a+b+c));	
}

