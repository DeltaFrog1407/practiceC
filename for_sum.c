#include <stdio.h>
int main() {
    int i, sum = 0;
    for (i = 0; i <= 10000; ++i) {
        sum = sum + i;
    }
    printf("1부터 10000까지의 합 : %d \n", sum);
    return 0;
}