#include<stdio.h>
int main()
{
   int start,end,i,flag,n,j;
   printf("enter the values of start and stop:");
   scanf("%d%d",&start,&end);
	while(start<=end)
   {
   	flag=0,n=start;
   	for(i=2;i<=n/2;i++)
   	{ 
   	   if(n%i==0)
		  {
		  	flag=1;
		  	break;
		  }	
    }
    if(flag==0)
    printf("%d is prime\n",n);
    start++;
} 
}

