#include <stdio.h>

int main(int argc, char const *argv[]) {
    int 🤮 = 0;
    int 🤪 = 0;
    int 😋;  // 0で終了、1でリトライ

    do {
        int 😊;
        printf("整数値を入力してください: ");
        scanf("%d", &😊);

        🤮 += 😊;
        🤪 += 1;

        printf("続けますか? (1:続ける, 0:終了): ");
        scanf("%d", &😋);
    } while (😋 == 1);

    printf("合計は%dで平均は%.2fです。\n", 🤮, (double)🤮 / 🤪);
    return 0;
}
