#include<stdio.h>
int main()
{
   int area,perimeter,length,width;
   printf("Enter the length and width:");
   scanf("%d",&length,&width);
   area=length*width;
   printf("area of rectangle=%d",area);
   perimeter=2*(length+width);
   printf("perimeter of rectangle=%d",perimeter);
   return 0;
}
