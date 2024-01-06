#include <stdio.h>
struct student
 {
    int stno;
    char stname[10];
    int m1,m2,m3;
    int tot;
    float avg;
};
void main()
{
   struct student s;
   printf("enter student number");
   scanf("%d",&s.stno);
   printf("enter student name");
   scanf("%s",s.stname);
   printf("enter m1 m2 m3");
   scanf("%d%d%d",&s.m1,&s.m2,&s.m3); 
   s.tot=s.m1+s.m2+s.m3;
   s.avg=(float)s.tot/3.0;
   printf("student number= %d\n",s.stno);
   printf("student name= %s\n",s.stname);
   printf("m1=%d m2=%d m3=%d\n",s.m1,s.m2,s.m3);
   printf("Total marks= %d\n",s.tot);
   printf("Average marks= %f\n",s.avg);
   return 0;
}

   

