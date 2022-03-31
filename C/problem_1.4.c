/*
 * CH-230-A
 * a1_p1.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    int x = 17;
    int y = 4;
    printf("x=%d\ny=%d\n", x,y);
    int sum = x+y;
    printf("sum=%d\n", sum);
    int prod = x*y;
    printf("product=%d\n", prod);
    int diff = x-y;
    printf("difference=%d\n", diff);
    float div = x/ (float)y;
    printf("division=%f\n", div);
    int rem = x%y;
    printf("remainder of division=%d\n",rem);
    return 0;
}
