/*
 * CH-230-A
 * a7_p3.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

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
