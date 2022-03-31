/*
 * CH-230-A
 * a5_p5.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>

// Function for scaler product
double scal_prod(double a[], double b[], int num)
{
    //initialize a variable for product of vectors
    double prod = 0.0;
    //using loop to count every element
    for(int i = 0; i < num; i++){
        prod += (a[i] * b[i]);
    }
    return prod;
}

void maximum(double a[], int num) // Function for maximum
{
    //initialize variables
    double max = a[0];
    int count = 0;
    //using loop check other elements for maximum
    for(int i = 1; i < num; i++) {
        if (max < a[i]) {
            max = a[i];
            count = i;
        }
    }
    //printing results
    printf("The largest = %lf\n", max);
    printf("Position of largest = %d\n", count);
}

void minimum(double b[], int number) // Function for minimum
{
    //initialize variables
    double min = b[0];
    int count = 0;
    //using loop check other elements for minimum
    for(int i = 1; i < number; i++) {
        if (min > b[i]) {
            min = b[i];
            count = i;
        }
    }
    //printing results
    printf("The smallest = %lf\n", min);
    printf("Position of smallest = %d\n", count);
}

int main ()
{
    //initialize a variable for the size and read input
    int n;
    scanf("%d", &n);
    //initialize arrays
    double v[n], w[n];
    //Reading matrices
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%lf", &w[i]);
    }
    //printing product
    printf("Scalar product=%lf\n", scal_prod(v, w, n));
    // Call functions
    minimum(v, n);
    maximum(v, n);

    minimum(w, n);
    maximum(w, n);

    return 0;
}