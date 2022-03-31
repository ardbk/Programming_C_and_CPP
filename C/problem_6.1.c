/*
 * CH-230-A
 * a6_p1.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>
//defining a function SWAP which swaps two number
#define SWAP(num1, num2, dataType) { dataType tempNum = num1; num1 = num2; num2 = tempNum; }

int main() {
    //initialising variables
    int num1, num2;
    double num3, num4;
    //reading input for these variables
    //scanf("%d %d %f %f", &num1, &num2, &num3, &num4);
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%lf",&num3);
    scanf("%lf",&num4);
    //calling function SWAP
    SWAP(num1, num2, int);
    SWAP(num3, num4, double);
    //printing result
    printf("After swapping:\n%d\n%d\n%lf\n%lf\n",num1,num2,num3,num4);
    return 0;
}

