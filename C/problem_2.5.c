/*
 * CH-230-A
 * a2_p5.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    //first, we need to initialize an integer variable
    int a;
    //get a value for this variable
    scanf("%d", &a);
    //print the value
    printf("%d\n", a);
    //initialize a pointer of a
    int *ptr_a;
    //then assign it
    ptr_a = &a;
    //print the address contained in the pointer variable
    printf("%p\n", ptr_a);
    //increasing a value of a by 5
    *ptr_a = *ptr_a + 5;
    //print the modified value and address contained in the pointer variable
    printf("The value of variable is %d and the address is %p\n", *ptr_a, ptr_a);
    return 0;
}