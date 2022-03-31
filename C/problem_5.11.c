/*
 * CH-230-A
 * a5_p11.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/


#include <stdio.h>
#include <math.h>

int primer(int n)
{
    if(n==1) return 0;
    else{
        //using prime laws to determine if the number is prime
        for(int i=2; i<=(int)sqrt(n); i++){
            if(n%i == 0) {
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
    //initialising a variable and reading input
    int x;
    scanf("%d",&x);
    //printing corresponding result
    if(primer(x) == 1)
        printf("%d is prime\n",x);
    else
        printf("%d is not prime\n",x);
    return 0;
}
