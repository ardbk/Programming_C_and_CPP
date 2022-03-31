/*
 * CH-230-A
 * a2_p9.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    //initialize a char variable
    char ch;
    //read an input for this variable
    scanf("%c", &ch);
    //get decimal value of this character
    int dec = (int)ch;
    //compare this value with ASCII code to check whether it is letter or digit or something else
    if(dec >= 48 && dec <=57)
        printf("%c is a digit\n", ch);
    else if((dec >= 65 && dec <= 90) || (dec >= 97 && dec <= 122))
        printf("%c is a letter\n", ch);
    else
        printf("%c is some other symbol\n", ch);
    return 0;
}
