/*odd even check
Written by Janvi Agravat
this program reads a number and tells whether that number is even or odd*/

#include<stdio.h>
int main()
{
    int num, remainder;
    printf("Enter the number you want to check: ");
    scanf("%d", &num);
    //using modulus operator to find the remainder
    remainder = num%2;
    //if remainder ir 0, number is even, if it is 1, number is odd
    if (remainder = 0){
        printf("The number is even!");
    }
    else if (remainder = 1){
        printf("The number is odd!");
    }
    return 0;
}