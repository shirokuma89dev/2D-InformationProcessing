#include <stdio.h>

int main(int argc, char const *argv[]) {
    int input;

    printf("正の整数を入力してください: ");
    scanf("%d", &input);

    int i = 0;
    while (i <= input) {
        printf("%d", i++);
    }

    printf("\n");
    return 0;
}
