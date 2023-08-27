#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *parr[5];
    int i = 0;

    parr[0] = &arr[0];
    parr[4] = &arr[4];
    printf("%p \n", parr[4]);
    printf("%p \n", &arr[4]);
    printf("%d \n", *(parr[4]-1));
    for (i=0; i<5; i++) {
        printf("arr[%d] : %p \n", i, &arr[i]);
        printf("parr[%d] : %p \n", i, parr[i]);
    }


    printf("parr[2] : %d \n", *parr[2]);
    printf("3[arr] : %d \n", 3[arr]);
    printf("*(3+a) : %d \n", *(arr + 3));
    return 0;
}