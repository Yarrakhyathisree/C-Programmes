#include<Stdio.h>
void display(int* ,int);
void sum(int*,int);
int main()
{
	int a[10],i,n,*ptr;
	ptr=a;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    display(a,n);
    sum(ptr,n);
    return 0;
}
void display(int a[] ,int n)
{
	int i;
	printf("The elements are:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
void sum(int *ptr1,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	sum=sum+*(ptr1+i);
	printf("sum=%d",sum);
}

