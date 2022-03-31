#include <stdio.h>
#include <stdlib.h>

void print_matrix(int **A, int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ", *(*(A+i)+j));
        }
        printf("\n");
    }
}

int main() {
    FILE *input;
    input = fopen("input.txt", "r");
    if(input == NULL){
        printf("File wasn't open\n");
        return 0;
    }
    int rows, cols;
    fscanf(input, "%d %d", &rows, &cols);
    printf("%d %d\n", rows, cols);
    int **A;
    A = (int **) malloc(sizeof(int*) * rows);
    for(int i=0; i < rows; i++) {
        *(A+i) = (int *) malloc(sizeof(int) * cols);
    }
    if(A == NULL){
        printf("Error allocating\n");
        return 0;
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            *(*(A+i)+j) = 0;
        }
    }
    int x, y, z;
    while(feof(input) == 0){
        fscanf(input, "%d %d %d ", &x, &y, &z);
        *(*(A+x-1)+y-1) = z;
        printf("%d %d %d\n", x, y, z);
    }

    print_matrix(A, rows, cols);
    return 0;
}
