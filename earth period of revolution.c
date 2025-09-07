/*earth's period of revolution
written by Janvi Agravat
this code simply converts the time on revolution of earth
from second to number of days, hours and minutes*/

#include<stdio.h>
int main()
{
    int revolv_sec, days, hours, mins, remaining_sec; //defining variables
    revolv_sec = 31558150;
    printf("The time of revolution of earth in seconds is 31558150 s");
    days = revolv_sec/(60*60*24); //finding number of days
    remaining_sec = revolv_sec%(60*60*24); //finding the remaining seconds over number of days
    hours = remaining_sec/(60*60); //converting the remaining secconds to hours
    mins = (remaining_sec%(60*60))/60; //finding the remaining minutes over hours
    printf("\nThe period of revolution of earth is %d days, %d hours, %d minutes", days, hours, mins);
    return 0;
}