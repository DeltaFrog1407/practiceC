#include <stdio.h>
int main() {
    int num;

    printf("아무 숫자나 입력해 보세요 : ");
    scanf("%d", &num);

    if (num == 7) {
        printf("행운의 숫자 7을 입력하셨군요!");
    } else if (num == 4){
            printf("죽음의 숫자 4 인가요 ;;; \n");
    }
    else {
        printf("보통 숫자 %d를 입력하셨군요! \n", num);
    }
    return 0;
}