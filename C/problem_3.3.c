/*
 * CH-230-A
 * a3_p3.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

float convert (int cm){
    //need to return in km
    return cm/pow(10,5);
}

int main() {
    //initialize a variable
    int cm;
    //read input for this variable
    scanf("%d", &cm);
    //print this value in km using function convert
    printf("Result of conversion: %f\n", convert(cm));
    return 0;
}