/*
 * CH-230-A
 * a4_p1.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

int main() {
    //initialize a variable for a radius, limit, and step
    float x, l, s;
    //read an input for these variables
    scanf("%f %f %f", &x, &l, &s);
    //check if limit upper or lower
    for(float j=x;j<=l;j+=s){
        float i=j;
        printf("%f %f %f\n", i, i*i*M_PI, 2*i*M_PI);
    }
    return 0;
}
