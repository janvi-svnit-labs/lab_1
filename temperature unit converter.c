/*farenheit to celsius converter
written by Janvi Agravat
this is a simple program which converts the temperature from fareinheit to celsius
and from celsius to farenheit*/

#include<stdio.h>
int main()
{
    int conversion;
    printf("1) Farenheit to Celsius");
    printf("\n2) Celsius to Farenheit");
    printf("\nYour selection: ");
    scanf("%d", &conversion);

    //using if else statments to give choice between type of conversions
    if (conversion == 1){
        float temp, converted_temp;
        printf("Enter the temperature value: ");
        scanf("%f", &temp);
        converted_temp= (0.5556)*(temp-32.00000);
        printf("\nThe temperature in celsius is: %f", converted_temp);
    }
    if (conversion == 2){
        float temp, converted_temp;
        printf("Enter the temperature value: ");
        scanf("%f", &temp);
        converted_temp = (1.8)*temp + 32.00000;
        printf("\nThe temperature in farenheit is: %f", converted_temp);
    }
    return 0;
}