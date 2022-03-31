/*
 * CH-230-A
 * a4_p6.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void twoGreatestValues(int arr[], int num){
    //initialize variables for two greatest values
    int first, second;
    //assign first two values of array to these variables
    if(arr[0] > arr[1]){
        first = arr[0];
        second = arr[1];
    } else{
        first = arr[1];
        second = arr[0];
    }
    //using for check if other values are greater
    for(int i=2; i<num; i++){
        //if greater than first
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        //if greater only than second
        else if(arr[i] > second){
            second = arr[i];
        }
    }
    //print the results
    printf("The two greatest values are %d and %d\n", first, second);
}

int main() {
    //initialize two variables
    int num, *arr;
    //read an input for number of elements
    printf("number of elements - ");
    scanf("%d", &num);
    //allocate memroy for array
    arr = (int*) malloc(sizeof(int)*num);
    //check for memory
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    //using for assign each element
    for(int i=0; i<num; i++){
        printf("enter %d element - ", i+1);
        scanf("%d", &arr[i]);
    }
    twoGreatestValues(arr, num);
    //release memory
    free(arr);
    return 0;
}
