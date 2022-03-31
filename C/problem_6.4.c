/*
 * CH-230-A
 * a6_p4.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

#define INTERMEDIATE(a, b) {a*b}

//make a function for scalar product
int scalar_product(int x[], int y[], int n){
    //initialize a variable for scalar product
    int prod = 0;
    for(int i=0;i<n;i++){
        prod += (x[i]*y[i]);
    }
    return prod;
}

int main() {
    //initialize a variable for dimension of vectors
    int n;
    //read input for dimension
    scanf("%d", &n);
    //initialize two vectors with dimension n and a variable for scalar product
    int x[n], y[n];
    //read input for these two vectors
    for(int i=0;i<n;i++){
        scanf("%d", &x[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &y[i]);
    }
    //check if INTERMEDIATE is defined and make corresponding functions
#ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for(int i=0; i<n; i++) {
        printf("%d\n", x[i] * y[i]);
    }
#endif
    //print scalar product
    printf("The scalar product is: %d", scalar_product(x, y, n));
    return 0;
}
