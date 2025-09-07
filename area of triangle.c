/*calculate area of triangle
written by Janvi Agravat
this is a simple code which takes height and length of base as input and calculates area*/

#include<stdio.h>
int main()
{
    float height, base, area;
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    printf("Enter the length of base of triangle: ");
    scanf("%f", &base);
    area = 0.5 * height * base;
    printf("\nArea of triangle is: %f", area);
    return 0;

}