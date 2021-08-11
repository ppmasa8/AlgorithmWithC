#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime_judge(int num) {
    double sq = sqrt(num);
    for (int i = 2; i < sq+1; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int i;
    for (i = 2; i < 50; i++) {
        if (prime_judge(i) == true) {
            printf("%dは素数です。\n", i);
        } else {
            printf("%dは素数ではありません。\n", i);
        }
    }
    return 0;
}