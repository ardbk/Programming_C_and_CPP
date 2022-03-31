/*
 * CH-230-A
 * a3_p7.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c){
    int base = m;
    for(int i=0;i<n;i++){
        for(int k=0;k<base;k++){
            printf("%c", c);
        }
        base++;
        printf("\n");
    }
}

int main() {
    //initialize variables
    int n,m;
    char c;
    //read input for these variables
    scanf("%d %d %c", &n, &m, &c);
    //call the function print_form
    print_form(n,m,c);
    return 0;
}
