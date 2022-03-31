#include <stdio.h>

int main() {
    double d;
    float f, result, *r_ptr;
    int n;
    scanf("%lf %f %d", &d, &f, &n);
    result = d*f*n;
    r_ptr = &result;
    *r_ptr += 5;
    printf("%f\n", result);
    printf("%f\n", *r_ptr);
    return 0;
}
