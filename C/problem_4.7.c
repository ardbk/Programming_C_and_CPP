/*
 * CH-230-A
 * a4_p7.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    //initialize a variable
    int n;
    //read an input for this variable
    scanf("%d", &n);
    //initialize a two dimensional matrix
    int arr[n][n];
    //read an input for the matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //print the matrix
    printf("The entered matrix is:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //print under the main diagonal
    printf("Under the main diagonal:\n");
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
    return 0;
}
