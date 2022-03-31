/*
 * CH-230-A
 * a8_p4.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"

int main() {
    struct stack my_stack;
    char ch, check;
    int value;
    while(1){
        scanf(" %c", &ch);
        switch (ch) {
            case 's':
                scanf("%d", &value);
                printf("Pushing ");
                pushing(&my_stack, value);
                printf("\n");
                break;
            case 'p':
                printf("Popping ");
                popping(&my_stack);
                printf("\n");
                break;
            case 'e':
                printf("Emptying Stack ");
                emptyingStack(&my_stack);
                printf("\n");
                break;
            case 'q':
                printf("Quit");
                return 0;
            case 'c':
                //we will delete all elements before
                printf("This function will clear your stack: Y or N  -- ");
                scanf(" %c", &check);
                //if the user agreed
                if(check == 'Y'){
                    //read the number
                    printf("Enter the integer: ");
                    scanf("%d", &value);
                    //convert it
                    convertBinary(value, &my_stack);
                    //print the binary representation
                    printf("The binary representation of %d is ", value);
                    print(&my_stack);
                }
                break;
        }
    }
}
