#include <stdio.h>

#include <math.h>

int main(void) {
    int a, b, c;

    printf("aを入力:");
    scanf("%d", &a);

    printf("bを入力:");
    scanf("%d", &b);

    printf("cを入力:");
    scanf("%d", &c);

    int judge = b * b - 4 * a * c;

    if (judge > 0) {
        printf("2つの実数解が存在する\n");
    } else if (judge == 0) {
        printf("重解が存在する\n");
    } else {
        printf("2つの虚数解が存在する\n");
    }

    return 0;
}
