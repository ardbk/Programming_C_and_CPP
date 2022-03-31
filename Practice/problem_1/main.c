#include <stdio.h>
#include <string.h>

int main()
{
    char dest[50] = "This is an";
    char src[50] = " example";

    strcat(dest, src);
    printf("%s\n", dest);
    char *dest1 = "This is an example";
    char *src2 = " to show working of strncat this is not added";

    strncat(dest1, src2, 2);
    printf("%s\n", dest1);
    strcpy(dest, src);
    printf("%s", dest);
    return 0;
}