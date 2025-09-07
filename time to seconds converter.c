/*time converter
written by Janvi Agravat
this program reads time in the format hrs, mins, seconds and converts it into total seconds*/

#include<stdio.h>
int main()
{
    int hrs, mins, sec, total_sec; //defining variables
    printf("Enter hours: ");
    scanf("%d", &hrs);
    printf("Enter minutes: ");
    scanf("%d", &mins);
    printf("Enter seconds: ");
    scanf("%d", &sec);
    total_sec = hrs*3600 + mins*60 + sec; //calculations
    printf("The time is %d hours %d minutes %d seconds OR %d total seconds", hrs, mins, sec, total_sec);
    return 0;
}