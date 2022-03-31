/*
 * CH-230-A
 * a7_p7.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"

int main() {
    struct stack my_stack;
    char ch;
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
        }
    }
}
