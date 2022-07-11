#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("正の整数：");

    int amount;
    scanf("%d", &amount);

    if (amount <= 1) return 0;

    while (amount-- > 0) {
        putchar('*');
    }

    putchar('\n');

    return 0;
}
