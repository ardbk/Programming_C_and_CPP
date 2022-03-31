/*
 * CH-230-A
 * a8_p6.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    //initializing two variables for names
    char name1[30], name2[30];
    //read inputs for them
    scanf("%s %s", name1, name2);
    //initializing files
    FILE *fInput1, *fInput2, *fOutput;
    //opening these files
    fInput1 = fopen(name1, "r");
    fInput2 = fopen(name2, "r");
    fOutput = fopen("results.txt", "w");
    //check if they were opened correctly
    if (fInput1 == NULL || fInput2 == NULL || fOutput == NULL) {
        printf("Some  error  occurred !\n");
        exit(1);
    }
    //initialize two double
    double a, b;
    //read two doubles from two different files
    fscanf(fInput1, "%lf", &a);
    fscanf(fInput2, "%lf", &b);
    //print product, sum, division, and difference
    fprintf(fOutput, "%lf + %lf = %lf\n", a, b, (a+b));
    fprintf(fOutput, "%lf - %lf = %lf\n", a, b, (a-b));
    fprintf(fOutput, "%lf * %lf = %lf\n", a, b, (a*b));
    fprintf(fOutput, "%lf / %lf = %lf\n", a, b, (a/b));
    //close these files
    fclose(fInput1);
    fclose(fInput2);
    fclose(fOutput);
    return 0;
}
