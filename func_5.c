#include <stdio.h>
int slave(int master_money) {
    master_money += 10000;
    return master_money;
}

int main() {
    int my_money = 100000;
    printf("2009.12.12 ��� : $%d \n", slave(my_money));
    printf("my_money : %d", my_money);
    return 0;
}