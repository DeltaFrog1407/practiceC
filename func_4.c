#include <stdio.h>
int magicbox(int i) {
    i += 4;
    return i;
}

int main() {
    int i;
    printf("���� ���ڿ� ������� �� : ");
    scanf("%d", &i);
    printf("���� ���ڸ� ������ : %d \n", magicbox(i));
    return 0;
}