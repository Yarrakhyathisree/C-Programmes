#include<stdio.h>
#include<math.h>
int main()
{
	double num,result;
	scanf("%lf",&num);
	result=fabs(num);
	printf("Absolute value of %0.2lf is %0.2lf",num,result);
	return 0;
}
