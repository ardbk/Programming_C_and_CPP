/*
 * CH-230-A
 * a2_p4.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    //First, we need to initialize three variables
    float a,b,h;
    //Then, we have to get input values for these variables
    scanf("%f %f %f", &a, &b, &h);
    //Print and calculate square area
    printf("square area=%f\n", a*a);
    //Print and calculate rectangle area
    printf("rectangle area=%f\n", a*b);
    //Print and calculate triangle area
    printf("triangle area=%f\n", a*h/2);
    //Print and calculate trapezoid area
    printf("trapezoid area=%f\n", (a+b)/2*h);
    return 0;
}
