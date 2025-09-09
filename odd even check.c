/*odd even check
Written by Janvi Agravat
this program reads a number and tells whether that number is even or odd*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number you want to check: ");
    scanf("%d", &num);

    if(num<0){ //to handle negative values
        printf("\nThe number you have entered is negative");
    }
    else if (num == 0){ //to handle 0
        printf("\nThe number you have entered is 0");
    }
    
    //if remainder ir 0, number is even, if it is 1, number is odd
    else if (num%2 == 0){
        printf("The number is even!");
    }
    else{
        printf("The number is odd!");
    }
    return 0;
}