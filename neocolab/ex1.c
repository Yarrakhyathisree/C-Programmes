#include<stdio.h>
#include<math.h>
int main()
{
	int base,exponent,result;
	scanf("%d",&base);
	scanf("%d",&exponent);
	result=pow(base,exponent);
    printf("%d",result);
    return 0;
	
}
