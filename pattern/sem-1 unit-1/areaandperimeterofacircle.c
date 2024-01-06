#include<stdio.h>
int main()
{
   /* C Programme for area and perimeter of a circle*/
   int area,perimeter,pie=3.14,r;
   printf("area of a circle:");
   scanf("%d%d",&area,&perimeter);
   area=pie*r*r;
   printf("area of circle=%d",area);
   printf("perimeter of a circle:");
   perimeter=2*pie*r;
   printf("perimeter of a circle=%d",perimeter);
   return 0;
}
