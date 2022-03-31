/*
 * CH-230-A
 * a4_p12.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceAll(char *str, char c, char e){
    //by using for replace all characters
    for(int i=0; i<strlen(str); i++){
        if(*(str+i) == c) *(str+i) = e;
    }
}

int main() {
    char str[80], c, e;
    while(1){
        fgets(str, sizeof(str), stdin);
        str[strlen(str)-1]='\0';
        if(strcmp(str, "stop") == 0) break;
        scanf(" %c %c", &c, &e);
        printf("string before the replacement - %s\n", str);
        printf("character to be replaced - %c\n", c);
        printf("character to replace - %c\n", e);
        replaceAll(str, c, e);
        printf("string after the replacement - %s\n", str);
        fgets(str, sizeof(str), stdin);
    }
    return 0;
}
