/*
 * CH-230-A
 * a6_p5.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
//function to convert to binery
void convertToBinary(char ch){
    //using loop to check every bit
    while(ch>=1){
        //print corresponding bit
        printf("%d", ch&1 ? 1 : 0);
        //next bit
        ch = ch>>1;
    }
}

int main() {
    //initialize a char and read input for this char
    unsigned char c;
    scanf("%c", &c);
    //initialize a variable for decimal representation for the char
    int dec_c = (int)c;
    //print the decimal representation
    printf("The decimal representation is: %d\n", dec_c);
    //print the message and binary representation
    printf("The backwards binary representation is: ");
    convertToBinary(c);
    printf("\n");
    return 0;
}
