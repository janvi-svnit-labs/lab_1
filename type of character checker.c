/*type of character checker
written by Janvi Agravat
this program tells your which type of character you have typed,
is it a capital letter, small letter, a digit or a symbol*/

#include<stdio.h>
int main()
{
    char character;
    int ascii;
    printf("Enter any letter, digit or symbol: ");
    scanf("%c", &character);
    ascii = (int) character;

    //divide based on the ascii codes of characters
    if (64<ascii && ascii<91){
        printf("This is a upper case letter");
    }
    else if (96<ascii && ascii<123){
        printf("This is lower case letter");
    }
    else if (47<ascii && ascii<58){
        printf("This is a digit");
    }
    else {
        printf("This is a special symbol");
    }
    printf("\nThe ascii code is %d", ascii);
    return 0;
}