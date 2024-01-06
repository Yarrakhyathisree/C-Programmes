#include<stdio.h>
//type-1 -no arguments no return 
void primegen();
int main()
{
	primegen();
	return 0;
}
void primegen()
{
    int start,end,i,n,flag;
    printf("Enter the value of start and end:");
    scanf("%d %d",&start,&end);
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
        printf("%d is prime",n);
        else
        printf("%d is not prime",n);
        start++;
        
    }
    
}

