#include<stdio.h>
int main()
{
   /*	C Programme for area and perimeter of a cone*/
   int r,h,area,volume,pie=3.14,l;
   printf("area of a cone:");
   scanf("%d%d",&area,&volume);
   area=pie*r*(r+l);
   printf("area of a cone=%d",area);
   printf("volume of a cone:");
   volume=1/3*pie*r*r*h;
   printf("volume of cone=%d",volume);
   return 0;
}
