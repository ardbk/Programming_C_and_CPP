/*
 * CH-230-A
 * a5_p4.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size){
    //change every element of the array
    for(int i=0; i<size; i++){
        arr[i] = arr[i]/5.0;
    }
}

int main() {
    //initialize and read input for the size
    int size;
    scanf("%d", &size);
    //initialize an array
    float *arr;
    arr = malloc(size * sizeof(float));
    if (arr == NULL){
        printf("an error has occurred\n");
        exit (1);
    }
    //read inputs for this array
    for(int i=0; i<size; i++){
        scanf("%f", &arr[i]);
    }
    //print every element of the array before division
    printf("Before:\n");
    for(int i=0; i<size; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    divby5( arr, size);
    //print every element of the array after division
    printf("After:\n");
    for(int i=0; i<size; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
