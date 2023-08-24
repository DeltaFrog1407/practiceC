#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* parr;
    int i;
    parr = &arr[0];

    for (i = 0; i < 10; i++) {
        printf("arr[%d]'s adress : %p ", i, &arr[i]);
        printf("(parr + %d)'s value : %p", i, (parr + i));

        if (&arr[i] == (parr + i)) {
            printf(" ==> correct \n");
        } else {
            printf("--> not correct \n");
        }
    }

    return 0;
}