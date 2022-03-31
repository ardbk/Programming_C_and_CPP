/*
 * CH-230-A
 * a3_p11.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int main() {
    //initialize two strings
    char one[180];
    fgets(one, sizeof(one), stdin);
    one[strlen(one)-1]='\0';
    char two[180];
    fgets(two, sizeof(two), stdin);
    two[strlen(two)-1]='\0';

    //print the size of two strings
    printf("length1=%d\n", (int)strlen(one));
    printf("length2=%d\n", (int)strlen(two));

    //initialize new variable for the concentration
    char result[180];
    //add the first string
    strcpy(result, one);
    //add the second string
    strcat(result, two);
    //print concentration of one with two
    printf("concatenation=%s\n", result);

    //initialize third string
    char three[strlen(two)];
    //copy the second string
    strcpy(three, two);
    //print the third string
    printf("copy=%s\n", three);

    //using condition if and else compare two strings
    int c = strcmp(one, two);
    if(c==0){
        printf("one is equal to two\n");
    }
    else if(c<0){
        printf("one is smaller than two\n");
    }
    else{
        printf("one is larger than two\n");
    }

    //initialize a variable
    char *e, ch;
    //read input for this variable
    scanf("%c", &ch);
    //using a function strchr we will be able to find a index of a character
    e = strchr(two, ch);
    if(e == NULL){
        printf("The character is not in the string\n");
    } else{
        int index = (int)(e - two);
        //print the position
        printf("position=%d\n", index);
    }
    return 0;
}
