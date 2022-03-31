/*
 * CH-230-A
 * a2_p3.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    //first we need to initialize variables for weeks, days, and hours
    int weeks, days, hours;
    //then we have to read the inputs for these variables
    scanf("%d %d %d", &weeks, &days, &hours);
    //Now, we have to count total number of hours and print it
    printf("%d", weeks*7*24+days*24+hours);
    return 0;
}
