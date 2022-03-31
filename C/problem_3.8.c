/*
 * CH-230-A
 * a3_p8.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

float sum(float list[], int n){
    float sum=0;
    for(int i=0;i<n-1;i++){
        sum += list[i];
    }
    return sum;
}

float average(float list[], int n){
    return sum(list, n)/(float)(n-1);
}

int main() {
    //need a variable to count the number of inputs
    int n=0;
    //we can easily create array of 10 elements since we know that no more than 10 elements will be entered
    float list[10];
    //need a function do while to read inputs while conditions are true
    do {
        n++;
        scanf("%f", &list[n-1]);
    }while ((list[n-1] != (float)-99.0) && (n<10));

    printf("sum = %f\naverage = %f", sum(list, n), average(list,n));
    return 0;
}
