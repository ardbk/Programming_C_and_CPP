/*
 * CH-230-A
 * a8_p8.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    //initialize a variable
    char name[30];
    //read input for this variable
    scanf("%s", name);
    //initialize a variable for file
    FILE *input;
    //open a file
    input = fopen(name, "r");
    if (input == NULL) {
        printf("Some  error  occurred !\n");
        return 0;
    }
    //initialize variables
    int num = 0, check=0;
    char ch;
    //read input from the file while there will be nothing
    while( (ch = fgetc(input)) != EOF)
    {
        //check if the word is ended
        if(ch == ' ' || ch == ',' || ch == '?' || ch == '!' || ch == '.' || ch == '\t' || ch == '\r' || ch == '\n'){
            //check if the word already ended
            if(check == 0) {
                num++;
                check = 1;
            }
        }
        else{
            //if new word is started, then check = 0
            check = 0;
        }
    }
    //print the result
    printf("The file contains %d words.", num);
    //close the file
    fclose(input);
    return 0;
}
