/*division allotment based on marks
written by Janvi Agravat
this program read the marks of five subjects and allots a division*/

#include<stdio.h>
int main()
{
    //defining variables and taking inputs
    int sub_1, sub_2, sub_3, sub_4, sub_5, total;
    float percent;
    printf("Enter you marks in 1st subject out off 100: ");
    scanf("%d", &sub_1);
    printf("Enter you marks in 2nd subject out off 100: ");
    scanf("%d", &sub_2);
    printf("Enter you marks in 3rd subject out off 100: ");
    scanf("%d", &sub_3);
    printf("Enter you marks in 4th subject out off 100: ");
    scanf("%d", &sub_4);
    printf("Enter you marks in 5th subject out off 100: ");
    scanf("%d", &sub_5);
    total = sub_1+sub_2+sub_3+sub_4+sub_5;
    percent = (float)total*0.2;
    printf("Your total is: %d", total);
    printf("\nYour percentage is: %f\n", percent);

    //defining divisions based on percentage
    if (90<percent){
        printf("Your division is 'A'");
    }
    else if (80<percent && percent<=90){
        printf("Your division is 'B'");
    }
    else if (70<percent && percent<=80){
        printf("Your division is 'C'");
    }
    else if (60<percent && percent<=70){
        printf("Your division is 'D'");
    }
    else{
        printf("Your division is 'F");
    }
    return 0;
}