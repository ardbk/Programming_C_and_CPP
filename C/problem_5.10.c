/*
 * CH-230-A
 * a5_p10.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void print(int n){
    //using conditions to avoid infinity loop
    if(n == 0) exit(0);
    else{
        //printing the number and calling itself for n-1
        printf("%d ", n);
        print(n-1);
    }
}

int main() {
    //initialize and read an input for n
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}
