#include <stdio.h>

int main(int argc, char const *argv[]) {
    int quantity;

    printf("整数は何個:");
    scanf("%d", &quantity);

    int i, amount = {0, 0};

    while (i < quantity) {
        printf("No.%d", ++i);

        int input;
        scanf("%d", &input);
        amount += input;
    }

    printf("合計値:%d\n", amount);
    printf("平均値:%d\n", amount / quantity);

    return 0;
}
