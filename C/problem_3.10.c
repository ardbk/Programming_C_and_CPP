/*
 * CH-230-A
 * a3_p10.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

float product(float a, float b){
    return a*b;
}

void productbyref(float a, float b, float *p){
    *p = product(a,b);
}

void modifybyref(float *a, float *b){
    *a = *a +3;
    *b= *b +11;
}

int main() {
    //initialize three float variables
    float a,b;
    //read input for this variables
    scanf("%f %f", &a, &b);

    //call the first function and print it
    printf("%f\n", product(a,b));
    //initialize the pointer of product and assign it
    float p;
    //call the second function and print it
    productbyref(a, b, &p);
    printf("%f\n", p);

    //call the third function and print it
    modifybyref(&a,&b);
    printf("%f\n%f\n", a,b);
    return 0;
}
