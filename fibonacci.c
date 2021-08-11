#include <stdio.h>
int return_fibonacci(int i, int j) {
    return i+j;
}

int main(void) {
    long long i=0, j=1;
    long long sum, k;
    for (k = 1; k < 100; k++) {
        sum = return_fibonacci(i, j);
        printf("%lld\n", sum);
        if (k % 2 == 0) {
            i = sum;
        } else {
            j = sum;
        }
    }
    return 0;
}