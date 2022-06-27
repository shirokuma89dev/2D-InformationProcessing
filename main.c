#include <stdio.h>

int main(void) {
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    if (input < 10 && input > 0) {
        printf("%dは一桁の自然数です。\n", input);
    } else {
        printf("%dは一桁の自然数ではありません\n", input);
    }

    return 0;
}