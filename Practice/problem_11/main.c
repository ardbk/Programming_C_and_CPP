#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    char str[20];
    struct node *next;
};

struct node* insertBegin(struct node* list, char newStr[]){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        return list;
    }
    strcpy(temp->str, newStr);
    temp->next = list;
    return temp;
}

void printList(struct node *list){
    struct node* cursor;
    cursor = list;
    while(cursor){
        printf("%s ", cursor->str);
        cursor = cursor->next;
    }
    printf("\n");
}

int main( )
{
    struct node *list = NULL;
    int n;
    char ch[20], *p_ch;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf(" %s", ch);
        p_ch = ch;
        list = insertBegin(list, p_ch);
        printList(list);
    }
    return 0;
}
