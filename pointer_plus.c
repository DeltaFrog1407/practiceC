#include <stdio.h>
int main() {
    int a;
    char b;
    double c;
    int* pa = &a;   
    char* pb = &b;
    double* pc = &c;

    printf("pa : %p \n", pa);
    printf("(pa + 1) : %p \n", pa + 1);
    printf("(pa - 1) : %p \n", pa - 1);
    printf("pb : %p \n", pb);
    printf("(pb + 1) : %p \n", pb + 1);
    printf("pc : %p \n", pc);
    printf("(pc + 1) : %p \n", pc + 1);

    return 0;
}