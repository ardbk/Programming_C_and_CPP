/*
 * CH-230-A
 * a6_p2.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

#define leastSignificant(c) (int)c%2

int main() {
    //initialize a variable
    unsigned char c;
    //read input for this variable
    scanf("%c", &c);
    //initialize and assign a variable for decimal representation
    int dec_c = (int)c;
    //print the decimal representation
    printf("The decimal representation is: %d\n", dec_c);
    //print the least significant bit
    printf("The least significant bit is: %d\n", leastSignificant(c));
    return 0;
}
