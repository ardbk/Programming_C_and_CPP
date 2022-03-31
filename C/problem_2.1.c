/*
 * CH-230-A
 * a2_p1.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <stdio.h>

int main() {
    double firstD, secondD;
    scanf("%lf", &firstD);
    scanf("%lf", &secondD);
    printf("sum of doubles=%lf\n", firstD+secondD);
    printf("difference of doubles=%lf\n", firstD-secondD);
    printf("square=%lf\n", firstD*firstD);
    int firstI, secondI;
    scanf("%d", &firstI);
    scanf("%d", &secondI);
    int sumInt, prodInt;
    sumInt = firstI+secondI;
    prodInt = firstI*secondI;
    printf("sum of integers=%d\n", sumInt);
    printf("product of integers=%d\n", prodInt);
    char firstC, secondC;
    scanf(" %c", &firstC);
    scanf(" %c", &secondC);
    int firstCDec = (int)firstC, secondCDec = (int)secondC;
    printf("sum of chars=%d\n", firstCDec+secondCDec);
    printf("product of chars=%d\n", firstCDec*secondCDec);
    printf("sum of chars=%c\n", (char)firstCDec+secondCDec);
    printf("product of chars=%c\n", (char)firstCDec*secondCDec);
    return 0;
}
