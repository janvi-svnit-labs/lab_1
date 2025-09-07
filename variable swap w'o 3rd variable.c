/*variable swap without 3rd variable
written by Janvi Agravat
this code swaps the value of two variables without using a 3rd variable
it uses basic maths and the understanding of how computer takes a value and then replaces it with
another value*/

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a number 'a': ");
    scanf("%d", &a);
    printf("Enter another number 'b': ");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a = %d, b = %d", a, b);
    return 0;

}