#include <stdio.h>

int main(int argc, char const *argv[]) {
    puts("正の整数値を加算します。終了するには-9999を入力：");
    int sum = 0;
    while (1) {
        int input;
        printf("整数値：");
        scanf("%d", &input);

        if (input == -9999) {
            break;
        } else if (input < 0) {
            printf("負の整数値は加算できません。\n");
            continue;
        }

        sum += input;
    }

    puts("-------------------------");
    printf("加算結果：%d\n", sum);

    return 0;
}
