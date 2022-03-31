/*
 * CH-230-A
 * a6_p6.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
//function to print binary representation
void binaryRepresentation(char ch){
    //initializing a mask
    unsigned int mask = 128;
    //using loop to check every bit
    while(mask>=1){
        //print corresponding bit
        printf("%d", ch&mask ? 1 : 0);
        //next bit
        mask = mask>>1;
    }
}

int main() {
    //initializing a variable and read input for this variable
    unsigned char c;
    scanf("%c", &c);
    //initializing a integer and assign a decimal representation of the char
    int dec_c = (int)c;
    //print the decimal representation
    printf("The decimal representation is: %d\n", dec_c);
    //print the message and call the function to print binary representation
    printf("The binary representation is: ");
    binaryRepresentation(c);
    printf("\n");
    return 0;
}
