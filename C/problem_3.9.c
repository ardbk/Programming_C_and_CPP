/*
 * CH-230-A
 * a3_p9.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

double sum25(double v[], int n) {
    //check if array has 5th element
    if (n < 6) {
        return -111;
    } else {
        //if it has, return sum
        return v[2] + v[5];
    }
}

int main() {
    //initialize a variable
    int n;
    //read input for this variable
    scanf("%d", &n);
    //initialize array with size n
    double v[n];
    //use function for to read all n inputs for the array
    for(int i=0;i<n;i++) {
        scanf("%lf", &v[i]);
    }
    //check for the condition
    if (n < 6) {
        printf("One or both positions are invalid\n");
    } else {
        //print the result
        printf("sum=%lf\n", sum25(v, n));
    }

    return 0;
}
