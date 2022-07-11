#include <stdio.h>

int main(int argc, char const *argv[]) {
    int input;  //入力

    do {
        printf("正の整数を入力してください: ");
        scanf("%d", &input);
        if (input <= 0) {
            puts("\a正でない数を入力しないでください。");
        }
    } while (input <= 0);

    // input > 0
    printf("その数を逆から読むと");

    while (input > 0) {
        printf("%d", input % 10);
        input /= 10;
    }
    puts("DEATH!!!");

    return 0;
}
