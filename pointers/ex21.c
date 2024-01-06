#include<stdio.h>
void modifyarray(int *a,int s)
{
	int i;
	for(i=0;i<s;i++)
	a[i]=a[i]*2;	
}
int main()
{
	int arr[5]={1,2,3,4,5};int i;
	int size=sizeof(arr)/sizeof(arr[0]);
	modifyarray(arr,size);
	for(i=0;i<size;i++)
	printf("%d\n",arr[i]);
	return 0;
}

