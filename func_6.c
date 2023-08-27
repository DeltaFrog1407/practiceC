#include <stdio.h>
int sosu(int n) {
    int i, j;
    int count = 0;
    int count2 = 0;
    for (i = 2; i <= n; i++) {
        int count = 0;
        for (j = 1; j <= i; j++) {
            if(i%j != 0) {
                continue;
            } else {
                count++;
            }
        }
        if (count == 2) {
            count2++;
        } else {
            continue;
        }
    }
    return count2;
}

int main() {
    int number;
    printf("input N : ");
    scanf("%d", &number);
    printf("1 to n sosu num : %d", sosu(number));
    return 0;
}