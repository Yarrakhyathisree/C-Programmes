//approach two 
//tyrp-2 -no arguments with return 
#include<stdio.h>
int isprime();
int main()
{ 
    int flag;
    flag=isprime();
    if(flag==1)
    printf("It is prime number");
    else
    printf("it is not prime number");
    return 0;
}
int isprime()
{
	int i,n,flag=0;
	printf("enter n value ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
	
	    if(n%i==0)
		{
			flag=1;
			break;
		}
    }
if(flag==0)
return 1;
else
return 0;

}
