/*gross salary calculator
written by Janvi Agravat
this is a simple gross salary calculator with an extra feature
to select between hourly paid employee and salaried employee using if else conditions*/

#include<stdio.h>
int main()
{
    //giving choice
    int type_of_pay;
    printf("Are you: ");
    printf("\n1) Salaried employee");
    printf("\n2) Hourly rate based employee");
    printf("\nEnter your choice: ");
    scanf("%d", &type_of_pay);

    //defining 1st choice
    if (type_of_pay == 1){
        int basic_salary, hra, other_allow, gross_salary;
        printf("Enter your basic salary: ");
        scanf("%d", &basic_salary);
        printf("Enter your house allowance: ");
        scanf("%d", &hra);
        printf("Enter other allowances given: ");
        scanf("%d", &other_allow);

        //handling negative values
        if (basic_salary<0 || hra<0 || other_allow<0){
            printf("Enter valid values");
        }
        else{
            gross_salary = basic_salary+hra+other_allow;
            printf("\nYour gross salary is: %d", gross_salary);
        }
    }
    //defining 2nd choice
    if (type_of_pay == 2){
        int hourly_pay, hours, gross_salary;
        printf("Enter your hourly rate: ");
        scanf("%d", &hourly_pay);
        printf("Enter the hours you have worked: ");
        scanf("%d", &hours);
        
        //handling negative values
        if (hourly_pay<0 || hours<0){
            printf("Enter valid values");
        }
        else{
        gross_salary= (hourly_pay * hours);
        printf("\nYour gross salary is: %d", gross_salary);
        }
    }
    else{ //handling any other values other than option 1 and 2
        printf("Enter a valid choice");
    }
    return 0;
}