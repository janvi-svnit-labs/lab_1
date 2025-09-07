/*variable swap using 3rd variable
written by Janvi Agravat
this code interchanges the value of 2 variables with the help of a 3rd variable*/

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number a = ");
    scanf("%d", &a);
    printf("Enter a number b = ");
    scanf("%d", &b);
    /*basically, we reserve the value of a as another variable then change it's original value
    to b then put the reserved value back to b*/
    c = a, a = b, b = c; 
    printf("Swapped numbers, a = %d, b = %d", a, b);
    return 0;
}