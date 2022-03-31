/*
 * CH-230-A
 * a8_p7.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    //initializing variables for files
    FILE *input1, *input2, *output;
    //assigning these variables
    input1 = fopen("text1.txt", "r");
    input2 = fopen("text2.txt", "r");
    output = fopen("merge12.txt", "w");
    //check if the files were opened correctly
    if (input1 == NULL || input2 == NULL || output == NULL) {
        printf("Some  error  occurred !\n");
        return 0;
    }
    //initialize a variable
    char line[100];
    //read input from the first file while there will be nothing
    while(fgets(line, 100, input1) != NULL)
    {
        //print these input on the file
        fprintf(output, "%s", line);
    }
    //print the \n
    fprintf(output, "\n");
    //read input from the second file while there will be nothing
    while(fgets(line, 100, input2) != NULL)
    {
        //print this input on the file
        fprintf(output, "%s", line);
    }
    return 0;
}
