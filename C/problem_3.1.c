/*
 * CH-230-A
 * a2_p1.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    //initialize float variable
    float x;
    //read input for this variable
    scanf("%f", &x);
    //initialize integer variable
    int n;
    //read input for this variable
    scanf("%d", &n);
    while (n<=0) {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    for(int i=0; i<n; i++)
        printf("%f\n", x);
    return 0;
}
