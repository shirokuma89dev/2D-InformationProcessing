#include <stdio.h>

int main(int argc, char const *argv[]) {
    int inputA, inputB;

    puts("二つの整数を入力してください");
    printf("A: ");
    scanf("%d", &inputA);
    printf("B: ");
    scanf("%d", &inputB);

    int min = (inputA < inputB) ? inputA : inputB;
    int max = (inputA > inputB) ? inputA : inputB;

    printf("%d以上%d以下の全て整数の和は", min, max);

    int sum = 0;
    while (min != max + 1) {
        sum += min++;
    }
    printf("%dです\n", sum);

    return 0;
}
