#include <stdio.h>

void total_time(const int mins[], const int secs[], int n, int *sum_min, int *sum_sec){
    int sums=0, summ=0;
    for(int i=0; i<n; i++){
        sums += secs[i];
        if(sums > 59){
            sums -=60;
            summ++;
        }
        summ += mins[i];
    }
    *sum_min = summ;
    *sum_sec = sums;
}

int main() {
    int mins[2] = {1, 2}, secs[2] = {65, 75};
    int sum_min, sum_sec;
    total_time(mins, secs, 2, &sum_min, &sum_sec);
    printf("%d - %d", sum_min, sum_sec);
    return 0;
}
