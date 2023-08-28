#include <stdio.h>
int max_arr(int *parr);
int main() {
    int arr[7];
    int i;

    for (i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    max_arr(arr);

    printf("입력한 배열 큰 순서대로 정렬 : ");
    for (i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

int max_arr(int *parr) {
    int i;
    int j;
    int temp;

    for (i = 0; i < 7; i++) {
        for (j = i+1; j<7; j++) {
            if (parr[i] < parr[j]) {
                temp = parr[i];
                parr[i] = parr[j];
                parr[j] = temp;
            }
        }
    }
    return 0;
}