/*
 * CH-230-A
 * a7_p6.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

struct person {
    char name[30];
    int age;
};

int compare(struct person *firstPerson, struct person *secondPerson, int type){
    if(type == 1){
        if(strcmp(firstPerson->name, secondPerson->name) == 0){
            if(firstPerson->age < secondPerson->age) return -1;
            else return 1;
        } else if(strcmp(firstPerson->name, secondPerson->name) < 0){
            return -1;
        }
        else return 1;
    } else{
        if(firstPerson->age == secondPerson->age){
            if(strcmp(firstPerson->name, secondPerson->name) > 0) return 1;
            else return -1;
        } else if(firstPerson->age > secondPerson->age) return 1;
        else return -1;
    }
}

void swap(struct person *firstPerson, struct person *secondPerson){
    struct person *tempPerson = NULL;
    tempPerson->age = firstPerson->age;
    strcpy(tempPerson->name, firstPerson->name);
    firstPerson->age = secondPerson->age;
    strcpy(firstPerson->name, secondPerson->name);
    secondPerson->age = tempPerson->age;
    strcpy(secondPerson->name, tempPerson->name);
}

void bubbleSort(struct person *person, int count, int type){
    int swapped = 1;
    while(swapped == 1){
        swapped = 0;
        for(int i=1; i<count; i++){
            if(compare(&person[i-1], &person[i], type) == 1){
                swap(&person[i-1], &person[i]);
                swapped = 1;
            }
        }
    }
}

void printPeople(struct person *people, int count){
    for(int i=0; i<count; i++){
        printf("{%s, %d}; ", people[i].name, people[i].age);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    struct person people[num];
    for(int i=0; i<num; i++){
        scanf("%s", people[i].name);
        scanf("%d", &people[i].age);
    }
    bubbleSort(people, num, 1);
    printPeople(people, num);
    bubbleSort(people, num, 0);
    printPeople(people, num);
    return 0;
}