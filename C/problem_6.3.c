/*
 * CH-230-A
 * a6_p3.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

//define a macro to determine min and max of two numbers
#define min_two(a,b) ( a<b ? a:b )
#define max_two(a,b) ( a>b ? a:b )
//define a macro to determine min and mac of three numbers using macros for determining min and max of two numbers
#define min(a,b,c) min_two(min_two(a,b), c)
#define max(a,b,c) max_two(max_two(a,b), c)
//define a macro to find mid range
#define mid_range(a, b, c) ((min(a, b, c)+max(a, b, c))/2.0)

int main() {
    //initialize variables
    int a, b, c;
    //read input for these variables
    scanf("%d %d %d", &a, &b, &c);
    //print the mid range
    printf("The mid-range is: %f\n", mid_range(a,b,c));
    return 0;
}
