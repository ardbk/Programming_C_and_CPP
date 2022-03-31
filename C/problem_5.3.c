/*
 * CH-230-A
 * a5_p3.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_lower(char* str)
{
    //initialize variable to count
    int count = 0;
    //Loop for checking the chars of string for the lowercase
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z'){
            count++; // Count lowercase characters
        }
        else if (str[0] == '\n'){
            break; // Break at the end
        }
    }
    return count;
}

int main ()
{
    //initialize a variable
    char string[50];
    //using loop to read input
    while (1){
        //reading string
        fgets (string, sizeof(string), stdin);
        //if string is empty, the loop has to stop
        if (string[0] == '\n'){
            break;
        }
        //printing results
        printf("Number of lowercase characters: %d\n", count_lower(string));
    }
    return 0;
}