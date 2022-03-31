/*
 * CH-230-A
 * a2_p7.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int i = 8;
    //we have to add {} because without {} function while do only first line after while,which is printf("i is %d\n", i);
    //In this situation, condition is always true, so loop will be infinity
    //However, if we add {} and write printf("i is %d\n", i); i--; inside of brackets, then inside of loop while, it will do printf as well as i--;
    while (i >= 4) {
        printf("i is %d\n", i);
        i--;
    }
    printf("That’s it.\n");
    return 0;
}
