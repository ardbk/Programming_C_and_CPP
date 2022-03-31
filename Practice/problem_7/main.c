#include <stdio.h>

int substitute_vowels(char *s, char ch){
    int n=0, i=0;
    while(*(s+i)){
        if(*(s+i) == 'a' || *(s+i) == 'e' || *(s+i) == 'i' || *(s+i) == 'o' || *(s+i) == 'u'){
            n++;
            *(s+i) = ch;
        }
        i++;
    }
    return n;
}

int main() {
    int n;
    char s[] = "This is a sentence";
    printf("%s\n", s);
    n = substitute_vowels(s, 'o');
    printf("%s\n", s);
    printf("%d\n", n);
}
