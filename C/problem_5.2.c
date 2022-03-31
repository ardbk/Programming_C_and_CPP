/*
 * CH-230-A
 * a5_p2.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>

void divby5(float arr[], int size){
    //change every element of the array
    for(int i=0; i<size; i++){
        arr[i] = arr[i]/5.0;
    }
}

int main() {
    //initialize and assign variables
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size = 6;
    //print every element of the array before division
    printf("Before:\n");
    for(int i=0; i<size; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    divby5(arr, size);
    //print every element of the array after division
    printf("After:\n");
    for(int i=0; i<size; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    return 0;
}
