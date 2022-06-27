#include <stdio.h>

int main(int argc, char const *argv[]) {
    int retry;

    do {
        int no;

        printf("整数を入力せよ：");
        scanf("%d", &no);

        if (no % 2 == 0) {
            printf("%dは偶数です\n", no);
        } else {
            printf("%dは奇数です\n", no);
        }

        printf("もう一度？(0:終了 9:続行)");
        scanf("%d", &retry);
    } while (retry == 0);

    return 0;
}
