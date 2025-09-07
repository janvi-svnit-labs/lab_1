/*seconds to time converter
written by Janvi Agravat
this program reads seconds and converts it into the format hours, minutes, seconds*/

#include<stdio.h>
int main()
{
    int sec, hrs, mins, tailing_sec, remaining_sec;
    printf("Enter the time in seconds: ");
    scanf("%d", &sec);
    hrs = sec/3600; //converting to hours
    remaining_sec = sec%3600; //finding remaining seconds
    mins = remaining_sec/60; //converting the remaining seconds into minutes
    tailing_sec = remaining_sec%60; //finding the last remaining seconds
    printf("The time is %d hours %d minutes and %d seconds", hrs, mins, tailing_sec);
    return 0;

}