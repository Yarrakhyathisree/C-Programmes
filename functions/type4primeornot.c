#include<stdio.h>
//print prime or not
//type-4 -with arguments with return
int isprime(int);
int main()
{
	int n,result;
	printf(:Enter the value of n:);
	scanf("%d",&n);
	result=isprime(n);
	if (result==1)
	printf("n is prime");
	else
	printf("n is not prime");
	return 0;
}
int isprime(int n)
{ 
  int i,count=0;
  for(i=1,i<=n,i++)
  {
  	if(n%i==0)
  	count++;
  }	
  if(count==2)
  return 1;
  else
  return 0;
}
