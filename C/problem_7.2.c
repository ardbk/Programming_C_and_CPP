/*
 * CH-230-A
 * a7_p2.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

struct list {
    char info;
    struct list *next;
    struct list *previous;
};

//function for adding an element to the beginning
struct list * addNewElement (struct list * my_list ,char newChar) {
    //create this new element
    struct list *newel;
    //allocate memory
    newel = (struct list *) malloc(sizeof(struct list));
    //check if memory is allocated
    if (newel == NULL) {
        //if not, then return corresponding message
        printf (" Error allocating memory \n");
        return my_list;
    }
    //assign info, next, previous of this element and my_list
    newel->info = newChar;
    newel->next = my_list;
    if(my_list != NULL) my_list->previous=newel;
    newel->previous = NULL;
    //return this element
    return newel;
}
//function for deleting an element an then reconnecting the list
struct list * removeElementByPosition (struct list *my_list, int position) {
    //initializing variables
    struct list *cursor = my_list, *right, *left;
    //if need to delete first element
    if(position == 0){
        //check if the list has one element
        if(my_list->next == NULL){
            //if the list has zero element, return NULL
            return NULL;
        } else{
            //just assigning the second element as a first element
            my_list = my_list->next;
            //assigning previous element to NULL
            my_list->previous = NULL;
            free(my_list->previous);
            //returning the new first element
            return my_list;
        }
    }
    else{
        //find an element at position
        for(int i=0; i<position; i++){
            cursor = cursor->next;
        }
        //assign the left element
        left = cursor->previous;
        //check if cursor the last element
        if(cursor->next == NULL){
            //if yes, after the left element, there has to be NULL
            left->next = NULL;
        }
        else{
            //if no, after the left element there has to be right element
            right = cursor->next;
            right->previous = left;
            left->next = right;
        }
        //deallocating memory
        free(cursor);
        //return my_list since it will not change
        return my_list;
    }
}

struct list * removeElementByValue(struct list *my_list, char ch) {
    //initializing a variable for position
    int position=0;
    //initializing and assigning a cursor for the list
    struct list *cursor = my_list;
    //using loop to go through all elements
    while(cursor->next != NULL){
        //assigning a cursor for the list
        cursor = my_list;
        //using a loop to go an element at position
        for(int i=0; i<position; i++){
            cursor = cursor->next;
        }
        //if this element's value is the same with character
        if(cursor->info == ch){
            //call the function to delete an element at specific position
            my_list = removeElementByPosition(my_list, position);
        }
        //if not, go to the next element
        else position++;
    }
    //return first element
    return my_list;
}

void printReverse(struct list * list) {
    //initializing and assigning a cursor to the list
    struct list *cursor = list;
    //assigning a cursor to the last element
    while (cursor -> next != NULL) cursor = cursor->next;
    //using loop to print
    while (cursor != NULL) {
        printf("%c ", cursor->info);
        cursor = cursor ->previous;
    }
    printf("\n");
}
//example from the slide
void printList(struct list* my_list){
    struct list *cursor;
    for(cursor = my_list; cursor; cursor = cursor->next){
        printf("%c ", cursor->info);
    }
    printf("\n");
}
//example from the slide
void disposeList(struct list* my_list){
    struct list *nextelem;
    while(my_list != NULL){
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}
//main function
int main(){
    //variable declaration
    int input;
    struct list * my_list = NULL;
    char ch;
    //using loop to read several inputs
    while (1){
        scanf("%d", &input);
        //using switch to compare what is the input
        switch (input) {
            //for every case, call the specific function
            case 1:
                scanf(" %c", &ch);
                my_list = addNewElement(my_list, ch);
                break;
            case 2:
                scanf(" %c", &ch);
                my_list = removeElementByValue(my_list, ch);
                break;
            case 3:
                printList(my_list);
                break;
            case 4:
                printReverse(my_list);
                break;
            case 5:
                disposeList(my_list);
                return 0;
        }
    }
}