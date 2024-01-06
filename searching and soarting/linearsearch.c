//linear search using static array
#include<stdio.h>
int main()
{
	int a[5],i,n,searchkey,flag=0;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element to be searched:");
	scanf("%d",&searchkey);
	for(i=0;i<n;i++)
	{
		if(a[i]==searchkey)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("Element is found at possition=%d",i+1);
	else 
	printf("element is not found");
	return 0;
}
