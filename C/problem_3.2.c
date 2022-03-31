/*
 * CH-230-A
 * a3_p2.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    //initialize the variables
    char ch;
    int n;
    //read input for both of them
    scanf("%c %d", &ch, &n);
    //make a loop which runs n+1 times starting from 0
    for(int i=0;i<=n;i++){
        //print corresponding characters
        printf("%c\n", ch-i);
    }
    return 0;
}
