#include <stdio.h>
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("arr[0] : %p \n", arr[0]);
    printf("&arr[0][0] : %p \n", &arr[0][0]);

    printf("arr[1] : %p \n", arr[1]);
    printf("&arr[1][0] : %p \n", &arr[1][0]);

    printf("Allsize : %d \n", sizeof(arr));
    printf("Allrow : %d \n", sizeof(arr[0])/sizeof(arr[0][0]));
    printf("Allline : %d \n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}