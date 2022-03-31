/*
 * CH-230-A
 * a6_p7.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

void binaryRepresentation(char ch){
    //initializing a variable mask
    unsigned int mask = 128;
    //using loop to compare each bit in the char with mask
    for(int i=0; i<8; i++) {
        //printing corresponding number
        printf("%d", ch & mask ? 1 : 0);
        //shifting 1 to the right in the binary of the mask
        mask = mask >> 1;
    }
}

void set3bits(unsigned char ch, int a, int b, int c){
    //initializing a variable mask
    unsigned int mask = 128;
    for(int i=7; i>=0; i--){
        //using loop to compare each bit in the char with mask and with a, b, c
        //if the bit's number is a or b or c
        if(i==a || i==b || i==c) printf("1");
        //if not compare with mask
        else printf("%d", ch & mask ? 1 : 0);
        //shifting 1 to the right in the binary of the mask
        mask = mask >>1;
    }
}

int main() {
    //initialize a char and read an input for this char
    unsigned char ch;
    scanf("%c", &ch);
    //initialize a variable for decimal representation and print it
    int dec_c = (int)ch;
    printf("The decimal representation is: %d\n", dec_c);
    //print the message for binary representation and call the function to print it
    printf("The binary representation is: ");
    binaryRepresentation(ch);
    printf("\n");
    //initialize variables for three bits and read inputs for them
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    //print the message for the 'after setting the bits' and call the function to print it
    printf("After setting the bits: ");
    set3bits(ch, a, b, c);
    printf("\n");
    return 0;
}
