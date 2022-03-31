#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct river {
    char name[40];
    int length;
    int drainage_area;
};

int compare (const void * a, const void * b) {
    struct river data_1 = *(struct river*)a;
    struct river data_2 = *(struct river *)b;
    return (data_2.length - data_1.length);
}

int main() {
    struct river list[30];
    FILE *input, *output;
    input = fopen("data.txt", "r");
    if(!input){
        printf("File wasn't found\n");
        return 0;
    }
    output = fopen("output.txt", "w");
    if(output == NULL){
        printf("File wasn't created\n");
        return 0;
    }

    int index = 0;
    char name[40];
    int length, area, pLength=-1, pArea=-1;
    while(1){
        fscanf(input, "%s %d %d", name, &length, &area);
        if(pLength == length && pArea == area) break;
        pLength = length; pArea = area;
        strcpy(list[index].name, name);
        list[index].length = length;
        list[index].drainage_area = area;
        index++;

    }
    qsort(list, index, sizeof(struct river), compare);
    for(int i=0; i<index; i++){
        printf("%s %d %d\n", list[i].name, list[i].length, list[i].drainage_area);
        fprintf(output, "%s %d %d\n", list[i].name, list[i].length, list[i].drainage_area);
    }

    fclose(input);
    fclose(output);
    return 0;
}
