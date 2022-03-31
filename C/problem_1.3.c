/*
 * CH-230-A
 * a1_p1.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    float result; /* The result of the division */
    int a = 5;
    /* First, it shows "Narrowing conversion from constant 'double' to 'int':6",
    which means that in line 6 we have to change int to double
    But, we need float, so we will change int to float */
    float b = 13.5;
    result = a / b;
    /* Second, it shows "Format specifies type 'int' but the argument has type 'float'
    Thus, we have to change format specifies type to 'float' in printf function */
    printf("The result is %f\n", result);
    return 0;
}
