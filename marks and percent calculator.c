/*simple marks and percent calculator
written by Janvi Agravat roll A64
this program takes a students marks in 5 subjects, makes total and
calculates the percentage*/

#include<stdio.h>
int main()
{
    int sub_1, sub_2, sub_3, sub_4, sub_5, total;
    float percent;
    printf("Enter you marks in 1st subject: ");
    scanf("%d", &sub_1);

    printf("Enter you marks in 2nd subject: ");
    scanf("%d", &sub_2);

    printf("Enter you marks in 3rd subject: ");
    scanf("%d", &sub_3);

    printf("Enter you marks in 4th subject: ");
    scanf("%d", &sub_4);

    printf("Enter you marks in 5th subject: ");
    scanf("%d", &sub_5);

    total = sub_1+sub_2+sub_3+sub_4+sub_5;
    percent = ((float)total)*100/500;

    printf("\nYour total is: %d", total);
    printf("\nYour percentage is: %f", percent);
    return 0;

}