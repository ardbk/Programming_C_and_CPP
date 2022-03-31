/*
 * CH-230-A
 * a4_p5.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]){
    //initialize a variable for the number of consonants
    int numOfCons = 0;
    //initialize a pointer
    char *p_str = str;
    //using for check every letter in a string
    for(int i=0; i<strlen(p_str)-1; i++){
        //initialize a variable for a letter
        char letter = *(p_str+i);
        //check if it is a letter
        if( ( (int)letter >64&&(int)letter <91 ) || ( (int)letter >96&&(int)letter <123) ){
            //instead of checking for a consonant letter, I just check if it is not a vowel letter
            if((letter != 'A') && (letter != 'a') && (letter != 'E') && (letter != 'e') && (letter != 'I') &&
               (letter != 'i') && (letter != 'O') && (letter != 'o') && (letter != 'U') && (letter != 'u') &&
               (letter != 'Y') && (letter != 'y')){
                numOfCons++;
            }
        }

    }
    return numOfCons;
}

int main() {
    //initialize a variable for a string
    char str[100];
    //read first string input
    fgets(str, sizeof(str), stdin);
    //use "do while" while \n will not be entered
    while (str[0] != '\n'){
        printf("Number of consonants=%d\n", count_consonants(str));
        fgets(str, sizeof(str), stdin);
    }
    return 0;
}

