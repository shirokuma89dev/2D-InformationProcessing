#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("正の整数を入力せよ：");

    int input;
    scanf("%d", &input);

    int counter = 2;
    while (counter < input) {
        printf("%d ", counter);
        counter += 2;
    }

    return 0;
}
