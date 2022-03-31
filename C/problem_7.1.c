/*
 * CH-230-A
 * a7_p1.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include "linked_list.h"

int main() {
    //initializing a struct and assigning it to NULL
    struct list *my_list = NULL;
    //initializing a char and int for inputs
    char ch;
    int n;
    //using a loop to read input several times
    while(1){
        //reading a char input
        scanf("%c", &ch);
        //using switch to decide which action to take
        switch (ch) {
            case 'a':
                //reading a int input
                scanf("%d", &n);
                //calling corresponding function
                my_list = pushBack(my_list, n);
                break;
            case 'b':
                //reading a int input
                scanf("%d", &n);
                //calling corresponding function
                my_list = pushFront(my_list, n);
                break;
            case 'p':
                //calling corresponding function
                printList(my_list);
                break;
            case 'r':
                //calling corresponding function
                my_list = removeFirstElement(my_list);
                break;
            case 'q':
                //calling corresponding function
                disposeList(my_list);
                //quit the program
                return 0;
        }
    }
}
