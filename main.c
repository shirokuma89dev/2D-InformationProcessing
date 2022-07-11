#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("正の整数：");

    int amount;
    scanf("%d", &amount);

    while (amount-- > 0) {
        puts("*");
    }

    return 0;
}
