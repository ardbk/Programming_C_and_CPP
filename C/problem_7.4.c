/*
 * CH-230-A
 * a7_p4.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

void uppercase(char *string){
    //using loop to go through every letter
    for(int i=0; i<strlen(string); i++){
        //if the letter is capital, change it
        if( string[i] >= 'A' && string[i] <= 'Z' )
        {
            printf("%c", (char)((int)string[i] + 32));
        }
        //otherwise, just print it
        else printf("%c", string[i]);
    }
}

void lowercase(char *string){
    //using loop to go through every letter
    for(int i=0; i<strlen(string); i++){
        //if the letter is lower, change it
        if( string[i] >= 'a' && string[i] <= 'z' )
        {
            printf("%c", (char)((int)string[i] - 32));
        }
            //otherwise, just print it
        else printf("%c", string[i]);
    }
}

void swapLetter(char *string){
    char tempString[100];
    //using loop to go through every letter
    for(int i=0; i<strlen(string); i++){
        //if the letter is lower, change it
        if( string[i] >= 'a' && string[i] <= 'z' )
        {
            tempString[i] = (char)((int)string[i] - 32);
        }
        //if the letter is capital, change it
        else if( string[i] >= 'A' && string[i] <= 'Z' )
        {
            tempString[i] = (char)((int)string[i] + 32);
        }
        //otherwise, assign it
        else tempString[i] = string[i];
    }
    printf("%s", tempString);
}

int main() {
    //initializing and assigning variables
    int input = 0;
    char string[50];
    //read the string
    fgets(string, sizeof(string), stdin);
    void (*use[3])(char*) = {uppercase,lowercase,swapLetter};
    //using loop to continue endless except for the 4
    while(input != 4){
        //read input
        scanf("%d", &input);
        //call specific function
        use[input-1](string);
    }
    return 0;
}
