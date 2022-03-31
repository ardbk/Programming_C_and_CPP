/*
 * CH-230-A
 * a4_p3.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num){
    //initialize float variable for a geometric mean
    float geoMean = 1;
    //using for multiply all elements
    for(int i=0; i<num; i++){
        geoMean *= arr[i];
    }
    //return result
    return pow(geoMean, 1/num);
}

float highestNum(float arr[], int num){
    //initialize float variable for a highest number and assign first element of array
    float highestNum = arr[0];
    //using for check if other elements smaller
    for(int i=1; i<num; i++){
        if(arr[i]>highestNum){
            //if not assign this variable as a highest number
            highestNum = arr[i];
        }
    }
    //return result
    return highestNum;
}

float smallestNum(float arr[], int num){
    //initialize float variable for a smallest number and assign first element of array
    float smallestNum = arr[0];
    //using for check if other elements higher
    for(int i=1; i<num; i++){
        if(arr[i]<smallestNum){
            //if not assign this variable as a smallest number
            smallestNum = arr[i];
        }
    }
    //return result
    return smallestNum;
}

float sumOfAllElements(float arr[], int num){
    //initialize a variable to count sum of all elements
    float sum=0;
    for(int i=0; i<num; i++){
        //using for add all elements
        sum += arr[i];
    }
    //return result
    return sum;
}

int main() {
    //initialize array and int for the number of elements
    float arr[15];
    int num=0;
    //read inputs while negative will not be entered
    do{
        num++;
        scanf("%f", &arr[num-1]);
    }while (arr[num-1]>0);
    //to delete last negative element from an array
    num--;
    //read and initialize a char element for switch
    char ch;
    //using infinity loop to enter infinite amount of char
    while (1){
        //using switch for cases
        scanf("%c", &ch);
        switch (ch) {
            //on each case print corresponding text and result
            case 'm':
                printf("geometric mean of the array - %f\n", geometric_mean(arr, num));
                break;
            case 'h':
                printf("highest number in the array - %f\n", highestNum(arr, num));
                break;
            case 'l':
                printf("smallest number in the array - %f\n", smallestNum(arr, num));
                break;
            case 's':
                printf("sum of all elements in the array - %f\n", sumOfAllElements(arr, num));
                break;
        }
    }
    return 0;
}
