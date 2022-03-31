/*
 * CH-230-A
 * a8_p5.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    //initializing files
    FILE *fInput, *fOutput;
    //assigning these files
    fInput = fopen("chars.txt", "r");
    fOutput = fopen("codesum.txt", "w");
    //checking if the files were opened correctly
    if (fInput == NULL || fOutput == NULL) {
        //if not, then quit the program and print corresponding message
        printf("Some  error  occurred !\n");
        exit(1);
    }
    //initializing two char
    char ch1, ch2;
    //read two chars from the first file
    fscanf(fInput, "%c %c", &ch1, &ch2);
    //print their sum as a number
    fprintf(fOutput, "%d", ((int)ch1+(int)ch2));
    //close these files
    fclose(fOutput);
    fclose(fInput);
    return 0;
}
