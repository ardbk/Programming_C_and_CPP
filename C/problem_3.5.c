/*
 * CH-230-A
 * a3_p5.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    //initialize all variables
    char c;
    int n;
    //read inputs for char and integer
    scanf("%c %d", &c, &n);
    double list[n];
    //read all n double values with for loop
    for(int i=0;i<n; i++){
        scanf("%lf", &list[i]);
    }
    //initialize a variable for the sum
    double sum = 0.0;
    //using switch for character c
    switch (c) {
        //when c is 's'
        case 's':
            for(int i=0;i<n;i++){
                sum += list[i];
            }
            printf("sum of the temperatures=%lf\n", sum);
            break;
        case 'p':
            for(int i=0;i<n;i++) {
                printf("%d temperature value - %lf\n", i+1, list[i]);
            }
            break;
        case 't':
            for(int i=0;i<n;i++) {
                printf("%d temperature value in Fahrenheit - %lf\n", i+1, 9*list[i]/5+32);
            }
            break;
        default:
            for(int i=0;i<n;i++) {
                sum += list[i];
            }
            printf("arithmetic mean=%lf\n", sum/n);
            break;
    }
    return 0;
}
