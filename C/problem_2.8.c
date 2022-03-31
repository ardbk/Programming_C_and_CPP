/*
 * CH-230-A
 * a2_p8.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    //assign a integer variable
    int number;
    //read an input value for this variable
    scanf("%d", &number);
    //check if the number is divisible by 2 and 7
    if(number%2 == 0 && number%7 == 0)
        printf("The number is divisible by 2 and 7\n");
    else
        printf("The number is NOT divisible by 2 and 7\n");
    return 0;
}
