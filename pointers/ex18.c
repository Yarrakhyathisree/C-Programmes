#include<stdio.h>
#include<string.h>
typedef struct employe 
{
    int empid;
    char empname[10];
    int empsalary;
}e;
void read(e*);
void display(e*);
void update(e*);
int main()
{
    e e1,*ptr;
    ptr=&e1;
    read(ptr);
    display(ptr);
    update(ptr);
    //display(ptr);
    return 0;
}
void read(e *ptr1)
{
    printf("Enter the employeid:");
    scanf("%d",&ptr1->empid);
    printf("Enter the employename:");
    scanf("%s",ptr1->empname);
    printf("Enter the employe salary:");
    scanf("%d",&ptr1->empsalary);
}
void display(e *ptr2)
{
    printf("the employe id=%d",ptr2->empid);
    printf("the employe name=%s",ptr2->empname);
    printf("the employe salary=%d",ptr2->empsalary);
}
void update(e *ptr3)
{
    ptr3->empid=14;
    strcpy(ptr3->empname,"vaishnavi");
    display(ptr3);
}
