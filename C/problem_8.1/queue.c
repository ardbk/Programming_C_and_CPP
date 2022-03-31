/*
 * CH-230-A
 * a8_p3.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*//**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
    return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    //initializing new node
    Node *newNode;
    //allocationg memory
    newNode=(Node*)malloc(sizeof(Node));
    //checking for memory allocation
    if (newNode == NULL) {
        printf("Memory allocation failed");
        exit(0);
    }
    //assigning newNode's item and next
    newNode->item=item;
    newNode->next=NULL;
    //check if queue empty
    if(queue_is_empty(pq)) {
        //if the queue empty, then
        pq->front=newNode;
        pq->rear=newNode;
    }
    else {
        //if not, assign a reference from the last and assign last element as a newNode
        pq->front->next=newNode;
        pq->front = newNode;
    }
    //incrementing the count for number of items
    pq->items++;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    //assign which element will be deleted
    *pitem = pq->rear->item;
    //initialize and assign element that should be deleted
    Node *tempNode = pq->rear->next;
    //deallocate memory
    free(pq->rear);
    //assign a new first element
    pq->rear = tempNode;
    //decrease the count for number of items
    pq->items--;
    return 0;
}

void printq(Queue *pq){
    //initialize and assign cursor element
    Node *cursor = pq->rear;
    //use loop to go through all element
    while(cursor != NULL){
        //print the elements
        printf("%d ", cursor->item);
        //go to the next element
        cursor = cursor->next;
    }
    printf("\n");
}

void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}

