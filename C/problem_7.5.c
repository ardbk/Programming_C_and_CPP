/*
 * CH-230-A
 * a7_p5.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
//example from the slide
int  ascending(const  void *va , const  void *vb) {
    const  int* a = (const  int*) va;
    const  int* b = (const  int*) vb;
    if (*a < *b) return  -1;
    else if (*a > *b) return  1;
    else  return  0;
}
//example from the slide
int  descending(const  void *va , const  void *vb) {
    const  int* a = (const  int*) va;
    const  int* b = (const  int*) vb;
    if (*a < *b) return  1;
    else if (*a > *b) return  -1;
    else  return  0;
}
//printing the array after sorting
void printArray(int arr[], int num, int check){
    //check if we need ascending or descending array
    if(check == 1) qsort (arr, num, sizeof(arr[0]), ascending);
    else qsort (arr, num, sizeof(arr[0]), descending);
    //printing the array
    for (int i=0; i<num; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    //initializing variables
    int num;
    char ch;
    //reading input for the number of elements in an array
    scanf("%d", &num);
    //initializing an array
    int arr[num];
    //reading input for every element of array
    for(int i=0;i<num;i++){
        scanf("%d", &arr[i]);
    }
    //using while to read input every time
    while(1) {
        //reading input
        scanf(" %c", &ch);
        //using switch to compare
        switch (ch) {
            //to quit the program
            case 'e':
                return 0;
                //to make ascending array
            case 'a':
                printArray(arr, num, 1);
                break;
                //to make descending array
            case 'd':
                printArray(arr, num, 0);
                break;
        }
    }
}
