#include <stdio.h>

int main(void) {
    int array[10] = {4, 2, 11, 4, 15, 7, 9, 12, 3, 6};
    int i, j, temp;
    j = 10;
    while (j > 1) {
        for (i = 0; i < 10; i++) {
            if (array[i] > array[i+1]) {
                temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
            }
        }
        j-=1;
    }
    printf("ソートした配列\n");
    int k;
    for (k = 0; k < 10; k++) {
        printf("%d\n", array[k]);
    }
    return 0;
}