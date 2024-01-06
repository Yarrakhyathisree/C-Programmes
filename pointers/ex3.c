#include<stdio.h>
int main()
{
	//for pointers it gives same bytes of memory 
	int *p;
	float *q;
	char *a;
	double *b;
	printf("the integer pointer=%d\n",sizeof(p));
	printf("the float pointer=%d\n",sizeof(q));
	printf("the chat pointer=%d\n",sizeof(a));
	printf("the double pointer=%d\n",sizeof(b));
	return 0;
}
