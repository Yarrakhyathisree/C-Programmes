
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b,Area;
    // Enter the Same Sides length
    printf("Enter Isosceles Triangle Length of a Side:");
    scanf("%f",&a);
    printf("Enter Isosceles Triangle Other Side:");
    scanf("%f",&b);
    Area = (b * sqrt((4 * a * a) - (b * b)))/4;
    printf("The Area of the Isosceles Triangle = %0.3f\n", Area);
    return 0;
}


