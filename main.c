#include <stdio.h>

int main(int argc, char const *argv[]) {
    int shoudRetry;
    
    do {
        int input;

        printf("整数を入力してください: ");
        scanf("%d", &input);

        if (input == 0) {
            puts("その数は0です。");
        } else if (input > 0) {
            puts("その数は正です。");
        } else {
            puts("その数は負です。");
        }
        printf("もう一度やりますか? (1:はい, 0:いいえ): ");
        scanf("%d", &shoudRetry);
    } while (shoudRetry == 1);
    return 0;
}
