/*
 * CH-230-A
 * a5_p8.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//function for scanning a matrix
void scan_matrix(int **matrix, int row, int col) {
    //scanning the inputted values to matrix1
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}

//function for printing a matrix
void print_matrix(int row, int col, int **mat) {
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

//Multiplication of the matrices
void multiply (int n, int m, int p, int **MatrixA, int **MatrixB) {
    //initialize Matrix C and allocate memory
    int **MatrixC;
    MatrixC=(int**)malloc(sizeof(int*)*n);
    for (int j =0; j<m; j++) {
        MatrixC[j]=(int*)malloc(sizeof(int)*p);
    }
    //safety check to proper memory allocation
    if (MatrixC == NULL){
        printf("an error has occured\n");
        exit (1);
    }

    //multiplication process
    for(int i=0;i<n;i++) {
        for(int j=0;j<p;j++){
            for (int k=0; k<m;k++)
                MatrixC[i][j] += MatrixA[i][k] * MatrixB[k][j];
        }
    }

    //printing multiplied matrix
    printf("The multiplication result AxB:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++) {
            printf("%d ", MatrixC[i][j]);
        }
        printf("\n");
    }
    //de-allocating memory
    for (int j=0; j<m; j++) {
        free(MatrixC[j]);
    }
    free(MatrixC);
}

int main () {
    //initialize variables and read inputs for them
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);

    //initialize matrices
    int **MatrixA, **MatrixB;
    //allocate memory for them
    MatrixA = (int**) malloc(sizeof(int*) * n);
    MatrixB = (int**) malloc(sizeof(int) * m);
    for (int a=0; a<n; a++){
        MatrixA[a]=(int*)malloc(sizeof(int)*m);
    }
    for (int b=0; b<m; b++){
        MatrixB[b]=(int*)malloc(sizeof(int)*p);
    }

    //safety check to proper memory allocation
    if (MatrixA == NULL){
        printf("an error has occured\n");
        exit (1);
    }
    if (MatrixB == NULL){
        printf("an error has occured\n");
        exit (1);
    }

    //scanning matrices
    scan_matrix(MatrixA,n ,m);
    scan_matrix(MatrixB,m ,p);

    //printing matrix
    printf ("Matrix A:\n");
    print_matrix(n, m, MatrixA);
    printf ("Matrix B:\n");
    print_matrix(m,p,MatrixB);

    //calling multiplication function
    multiply(n,m,p,MatrixA,MatrixB);

    //de-allocating memory
    for (int j=0; j<m; j++) {
        free(MatrixA[j]);
    }
    free(MatrixA);
    for (int j=0; j<m; j++) {
        free(MatrixB[j]);
    }
    free(MatrixB);
    return 0;
}