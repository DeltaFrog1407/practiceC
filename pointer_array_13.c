#include <stdio.h>
int main() {
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int **parr;

  parr = arr;

  printf("parr[1][1] : %d \n", parr[1][1]);  // 버그!

  return 0;
}