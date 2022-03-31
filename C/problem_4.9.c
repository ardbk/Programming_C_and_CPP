/*
 * CH-230-A
 * a4_p9.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int prodMinMax(int arr[], int n){
    //initialize min and max
    int min=arr[0], max=arr[0];
    //using for check other elements of array for min and max
    for(int i=1; i<n; i++){
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    return min*max;
}

int main() {
    //initialize variables for array and number of elements
    int num, *arr;
    //read an input for number of elements
    printf("number of elements - ");
    scanf("%d", &num);
    //memory allocation
    arr = (int*) malloc(sizeof(int)*num);
    //read input for every element in the array
    for(int i=0; i<num; i++){
        printf("enter %d element - ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("product of the smallest and largest elements is %d", prodMinMax(arr, num));
    free(arr);
    return 0;
}
