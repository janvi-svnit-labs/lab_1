/*cut off marks calculator
written by Janvi Agravat
this program calculates the cut off marks of a student*/

#include<stdio.h>
int main()
{
    float maths, physics, chemistry, entrance, cut_off; //defining variables
    printf("Enter your marks in mathematics out of 200: ");
    scanf("%f", &maths);
    printf("Enter your marks in physics out of 200: ");
    scanf("%f", &physics);
    printf("Enter your marks in chemistry out of 200: ");
    scanf("%f", &chemistry);
    printf("Enter your marks in entrance exam out of 100: ");
    scanf("%f", &entrance);
    cut_off = maths/2 + physics/2 + chemistry/2 + entrance; //csalculations
    printf("Your cut off is: %f", cut_off);
    return 0;

}