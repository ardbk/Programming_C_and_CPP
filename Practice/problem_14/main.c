#include <stdio.h>

int main(){
    FILE *output;
    output = fopen("generate.txt","w");
    char ch='a', s=' ', e='\n';
    for(int i=0; i<10; i++){
        fwrite(&ch, sizeof(char), 1, output);
        fwrite(&s, sizeof(char), 1, output);
        fwrite(&ch, sizeof(char), 1, output);
        fwrite(&ch, sizeof(char), 1, output);
        fwrite(&e, sizeof(char), 1, output);
        ch++;
    }




    fclose(output);

    return 0;

}