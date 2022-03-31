/*
 * CH-230-A
 * a3_p6.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

float to_pounds(int kg, int g){
    return (float)kg*2.2+(float)g/1000*2.2;
}

int main() {
    //initialize variables for kg and g
    int kg, g;
    //read input for both of these variables
    scanf("%d %d", &kg, &g);
    printf("Result of conversion: %f\n", to_pounds(kg, g));
    return 0;
}
