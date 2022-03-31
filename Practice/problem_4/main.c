#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char* password){
    int num=0, length = (int)strlen(password);
    for(int i=0; i<length; i++){
        int dec = (int)*(password+i);
        if(dec > 47 && dec < 58) num++;
    }
    if(num >=3 && length >= 8) return true;
    else return false;
}

int main() {
    char password[100];
    scanf("%s", password);
    if(check(password) == true) printf("true\n");
    else printf("false\n");
    printf("%s - %d", password, (int)strlen(password));
    return 0;
}
