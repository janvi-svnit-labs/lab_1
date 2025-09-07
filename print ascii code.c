/*print ascii code
written  by Janvi Agravat
this program writes the ascii code of any character we want*/

#include<stdio.h>
int main()
{
    char character;
    int ascii;
    printf("Enter any character: ");
    scanf("%c", &character);
    //all the characters are stored as integers(their ascii codes)
    ascii = (int) character;
    printf("The character's ascii code is: %d", ascii);
    return 0;
}