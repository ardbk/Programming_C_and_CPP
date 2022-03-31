/*
 * CH-230-A
 * a4_p11.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>



int count_insensitive(char *str, char c){
    //initialize a variable to count
    int count = 0;
    //By using for count the number of character
    for(int i = 0; i<strlen(str); i++){
        if (*(str + i) == c){
            count = count + 1;
        }
    }
    return count;
}

int main () {
    //initialize variables
    char string_char[30], *str, c;
    //read string input

    printf("Please enter a string - ");
    fgets(string_char, sizeof(string_char), stdin);
    *string_char = (char*) malloc(sizeof(char)*strlen(string_char));
    if (*string_char== NULL) {
        exit(1);
    }
    //allocate memory
    str = (char*) malloc(sizeof(char)*strlen(string_char));
    if (str== NULL) {
        exit(1);
    }
    //copy the original string
    strcpy(str,string_char);
    free(string_char);
    //printing result for characters ’b’, ’H’, ’8’, ’u’, and ’$’
    printf("The character ’b’ occurs %d times.\n", count_insensitive(str,'c'));
    printf("The character ’H’ occurs %d times.\n", count_insensitive(str,'h'));
    printf("The character ’8’ occurs %d times.\n", count_insensitive(str,'8'));
    printf("The character ’u’ occurs %d times.\n", count_insensitive(str,'u'));
    printf("The character ’$’ occurs %d times.\n", count_insensitive(str,'$'));

    //read char input
    printf("Please enter another char - ");
    scanf("%c", &c);

    //changing c into lower case
    if (c>='A'&& c<='Z') {
        c = (char) tolower((int)c);
    }

    //changing string to lower case
    for(int i = 0; i <= strlen(str); i++){
        if(str[i]>='A'&&str[i]<= 'Z'){
            str[i] = (char)tolower((int)str[i]);
        }
    }

    //printing result by calling the function
    printf("The character ’%c’ occurs %d times.\n",c,count_insensitive(str,c));
    return 0;
}
