/*
 * CH-230-A
 * a5_p7.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // Declaration
    char str1[100],str2[100], *str3;
    //reading inputs for strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    //deleting last character since it is \n
    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';
    // Memory allocation using length of two strins
    str3 = (char*) malloc(sizeof(char) * (strlen(str1)+strlen(str2)));

    // Concatenation of strings
    strcpy(str3, str1);
    strcat(str3, str2);

    printf("Result of concatenation: %s\n", str3); //Print thrird string

    free(str3);
    return 0;
}
