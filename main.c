#include <stdio.h>

int main(void) {
    int numberA, numberB, numberC;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &numberA, &numberB, &numberC);

    if(numberA <= numberB && numberB <= numberC) {
        puts("OK");
    } else {
        puts("NG");
    }

    return 0;
}
