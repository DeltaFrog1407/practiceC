#include <stdio.h>
int main() {
    int a;
    int b;
    int* const pa = &a;
    //const int* pa = &a;
    
    *pa = 3;
    //pa = &b;

    return 0;
}