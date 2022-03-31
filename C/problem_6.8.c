/*
 * CH-230-A
 * a6_p8.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

struct list {
    int info;
    struct list *next;
};
//example from the slide
struct list* pushFront(struct list* my_list, int value){
    struct list *newel;
    newel = (struct list*) malloc(sizeof(struct list));
    if(newel == NULL){
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = my_list;
    return newel;
}
//example from the slide
struct list* pushBack(struct list* my_list, int value){
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list *) malloc( sizeof (struct list));
    if(newel == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;
    if(my_list == NULL) return newel;
    while(cursor->next != NULL) cursor = cursor ->next;
    cursor->next = newel;
    return my_list;
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
//example from the slide
void printList(struct list* my_list){
    struct list *p;
    for(p = my_list; p; p = p->next){
        printf("%d ", p->info);
    }
    printf("\n");
}
//function to remove the first element
struct list* removeFirstElement(struct list* my_list){
    //check if the list has zero element
    if(my_list == NULL){
        //if the list has zero element, return NULL
        return NULL;
    } else{
        //just assigning the second element as a first element
        my_list = my_list->next;
        //returning the new first element
        return my_list;
    }
}
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
