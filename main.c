#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int operation;
    printf("Enter operation: ");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case 2:
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case 4:
            printf("%d / %d = %d\n", a, b, a / b);
            break;
        default:
            printf("Invalid operation\n");
            break;
    }
    return 0;
}
