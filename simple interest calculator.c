/*simple interest calculator
written by Janvi Agravat
it is a simple program which calculates simple interest by taking inputs
it uses printf and scanf functions*/

#include<stdio.h>
int main()
{
    float prncple_amt, rate_of_interest, time, simple_interest;
    printf("Enter the principle amount: ");
    scanf("%f", &prncple_amt);
    printf("Enter the annual rate of interest: ");
    scanf("%f", &rate_of_interest);
    printf("Enter the time: ");
    scanf("%f", &time);
    simple_interest = (prncple_amt*rate_of_interest*time)/100;
    printf("\nThe simple interest is: %f", simple_interest);
    return 0;
}