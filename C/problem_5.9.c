/*
 * CH-230-A
 * a5_p9.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//function for scanning a matrix
void scan_matrix(int ***matrix, int row, int col, int deep)
{
    //scanning the inputted values to the 3D matrix
    for (int i=0; i < row; i++) {
        for (int j=0; j<col; j++) {
            for (int k=0; k<deep; k++) {
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }
}

//function for printing a matrix
void print_matrix(int row, int col, int deep, int ***mat)
{
    for (int i = 0; i < deep; i++)
    {
        printf("Section %d:\n", i+1);
        for (int j = 0; j < row; j++) {
            for (int k = 0; k < col; k++) {
                printf("%d ", mat[j][k][i]);
            }
            printf("\n");
        }
    }
}

int main () {
    //initialising variables
    int row,col,deep, ***Matrix3;
    scanf("%d %d %d", &row, &col, &deep);
    // Memory allocation of 3D array
    Matrix3 = (int***) malloc (sizeof(int*) * deep);
    for (int i=0; i<deep; i++) {
        Matrix3[i] = (int**) malloc (sizeof(int) * col);
        for (int j=0; j<col; j++) {
            Matrix3[i][j] = (int*) malloc (sizeof(int) * row);
        }
    }
    //Check to proper memory allocation
    if (Matrix3 == NULL)
    {
        printf("an error has occured\n");
        exit (1);
    }

    scan_matrix(Matrix3, row, col, deep);//Calling scan function
    print_matrix(row, col, deep, Matrix3);//Calling print function
    for (int i=0; i<col; i++) {
        for (int j=0; j<deep; j++) {
            free(Matrix3[i][j]);
        }
        free(Matrix3[i]);
    }
    free(Matrix3);
    return 0;
}