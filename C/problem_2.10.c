/*
 * CH-230-A
 * a2_p10.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    //initialize an integer variable
    int n;
    //read the input for this variable
    scanf("%d", &n);
    //asking write a valid input
    while(n<=0){
        //read the input for this variable
        scanf("%d", &n);
    }
    printf("1 day = 24 hours\n");
    int i = 2;
    while (i<=n){
        printf("%d days = %d hours\n", i, i*24);
        i++;
    }
    return 0;
}
