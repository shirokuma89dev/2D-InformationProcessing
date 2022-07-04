#include <stdio.h>

int main(int argc, char const *argv[]) {
    int sum = 0;
    int count = 0;
    int shouldRetry;  // 0で終了、1でリトライ

    do {
        int input;
        printf("整数値を入力してください: ");
        scanf("%d", &input);

        sum += input;
        count += 1;

        printf("続けますか? (1:続ける, 0:終了): ");
        scanf("%d", &shouldRetry);
    } while (shouldRetry == 1);

    printf("合計は%dで平均は%.2fです。\n", sum, (double)sum / count);
    return 0;
}
