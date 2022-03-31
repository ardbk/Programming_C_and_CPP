#include <stdio.h>
#include <stdbool.h>

bool odd(unsigned char data){
    if(data & 2) return false;
    else return true;
}

int main() {
    unsigned char input;
    while(1){
        scanf(" %c", &input);
        if(odd(input) == true){
            printf("This number is odd\n");
        } else {
            printf("This number is not odd\n");
        }
        if(input == 0) return 0;
    }
}
