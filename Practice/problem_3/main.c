#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, num1;
    scanf("%d", &n);
    arr = (int*)(malloc(n * sizeof(int)));
    if(arr == NULL){
        printf("Error! memory not allocated!\n");
    }
    for(int i=0; i<n; i++){
        scanf("%d", (arr+i));
    }
    FILE *output;
    output = fopen("squares.txt", "w");
    if(output == NULL){
        printf("Error! file not created!\n");
    }
    for(int i=n-1; i>=0; i--){
        num1 = *(arr+i);
        fprintf(output, "%d %d\n", num1, num1*num1);
    }
    fclose(output);
    return 0;
}
