/*simple interest calculator
written by Janvi Agravat
it is a simple program which calculates simple interest by taking inputs
it uses printf and scanf functions*/

#include<stdio.h>
int main()
{
    float prncple_amt, rate_of_interest, time, simple_interest; //defining variables
    printf("Enter the principle amount: ");
    scanf("%f", &prncple_amt);
    printf("Enter the annual rate of interest: ");
    scanf("%f", &rate_of_interest);
    printf("Enter the time: ");
    scanf("%f", &time);

    //handling negative values
    if (prncple_amt<0 || rate_of_interest<0 || time<0){
        printf("Enter valid input");
    }
    else{
        simple_interest = (prncple_amt*rate_of_interest*time)/100; //calculations
        printf("\nThe simple interest is: %f", simple_interest);
    }
    return 0;
}