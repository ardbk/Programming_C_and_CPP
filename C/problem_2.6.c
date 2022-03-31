/*
 * CH-230-A
 * a2_p6.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    //initialize two variables
    double x,y;
    //read inputs from keyboard
    scanf("%lf %lf", &x, &y);
    //assign and initialize three pointers
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    //print all pointers
    printf("ptr_one=%p \nptr_two=%p, \nptr_three=%p", ptr_one, ptr_two, ptr_three);
    return 0;
}
