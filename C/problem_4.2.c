/*
 * CH-230-A
 * a4_p2.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main() {
    //initialize a char variable for a string
    char word[50];
    //read an input string
    fgets(word, sizeof(word), stdin);
    //get length of a string
    int length = strlen(word)-1;
    //if length is even
    if(length%2==0) {
        //use for with step 2
        for(int i=0;i<length-1; i+=2){
            printf("%c\n %c\n", word[i], word[i+1]);
        }
    }
    //if length is odd
    else {
        //using for with step 2
        for(int i=0;i<length-2; i+=2){
            printf("%c\n %c\n",  word[i], word[i+1]);
        }
        //print last character of a string since length is odd, we leave it
        printf("%c\n", word[length-1]);
    }
    return 0;
}
