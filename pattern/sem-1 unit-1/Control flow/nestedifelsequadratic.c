#include<stdio.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("Enter a,b,c values:");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if (d==0)
	{
		r1=r2=-b/(2*a);
		printf("roots are real and unequal r1=%f r2=%f",r1,r2);
	}
    else if (d>0)
    {
    	r1=(-b+sqrt(d))/(2*a);
    	r2=(-b-sqrt(d))/(2*a);
    	printf("roots are real and unequal r1=%f r2=%f",r1,r2);
	}
	else
		printf("roots are imaginary ");
		return 0;
		
}
