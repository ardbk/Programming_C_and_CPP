/*
 * CH-230-A
 * a3_p4.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>
int position(char str[], char c)
{
    int idx;
/* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){}
    //we need for to do nothing so that idx will get index of g
    //Thus, I put {} after for since without {} it makes "return" function.
    //We know that after return it will not read, so after returning 0, it stops
    return idx;

}
int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
    }
}
