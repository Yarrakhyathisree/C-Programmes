//approach two 
//tyrp-2 -no arguments with return 
#include<stdio.h>
int isprime();
int main()
{ 
    if(flag==0)
    printf("%d is the prime number",n);
    if(flag==1)
    printf("%d is not prime number",n);
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
return 0;
else
return 1;

}
