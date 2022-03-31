/*
 * CH-230-A
 * a4_p10.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){
    //change values by reference
    *prod = a*b;
    *div = a/b;
    *pwr = pow(a,b);
    *invb = 1.0/b;
}

int main() {
    //initialize variables
    float a, b, prod, div, pwr, invb;
    //read input for a and b
    scanf("%f", &a);
    scanf("%f", &b);
    //call the function
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("product - %f\ndivision - %f\npower - %f\ninverted b - %f\n", prod, div, pwr, invb);
    return 0;
}
