/*
 * CH-230-A
 * a5_p6.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    //initialize variables and read input for size
    int size, count = 0;
    scanf("%d", &size);
    //initialize an array and pointer and assign pointer to array
    float arr[size], *ptr;
    ptr = arr;
    //read input for this array
    for(int i=0; i<size; i++){
        scanf("%f", &arr[i]);
    }
    //initialize a boolean variable to check for negative value
    bool check = false;
    //using while to count number of positive numbers until first negative
    //we will determine that negative is entered using check variable
    while(!check){
        if((*ptr)>=0){
            ptr++;
            count++;
        } else check = true;
    }
    printf("Before the first negative value: %d elements", count);
    return 0;
}
