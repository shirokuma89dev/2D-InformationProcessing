#include <stdio.h>

int main(int argc, char const *argv[]) {
    int input;

    printf("正の整数を入力してください: ");
    scanf("%d", &input);

    while (input >= 0){
        printf("%d ", input);
        input --;
    }

    printf("\n");
    return 0;
}
