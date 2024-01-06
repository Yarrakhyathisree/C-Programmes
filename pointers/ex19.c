//pointer to an array
#include<stdio.h>
int main()
{
	int a[10],*ptr,n,i;
	ptr=a;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the value of array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the array elements are\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",*(ptr+i));
	return 0;
}
