/*
 * CH-230-A
 * a1_p1.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    int result;
    /* The result of our calculation  */
    result = (2+7) * 9/3;
    /* In the printf function we write %d, so the function is looking for a integer number.
    However, after the comma, there is no variable.
     To fix this problem, we have to add variable "result" after comma in printf function
     */
    printf("The result is %d\n", result);
    return 0;
}
