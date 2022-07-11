#include <stdio.h>

int main(void) {
    int number;

    printf("正の整数：");
    scanf("%d", &number);

    while (number-- > 0){
        putchar('*');
    }
    putchar('\n');
    
    return 0;
}