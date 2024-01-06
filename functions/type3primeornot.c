#include<stdio.h>
//print prime or not
//type-3 -with arguments no return
void isprime(int);
int main()
{
	int n;
	printf(:Enter the value of n:);
	scanf("%d",&n);
	isprime();
	return 0;
}
void isprime(int n)
{ 
  int i,count=0;
  for(i=1,i<=n,i++)
  {
  	if(n%i==0)
  	count++;
  }	
  if(count==2)
  printf("n is prime");
  else
  printf("n is not prime");
}
