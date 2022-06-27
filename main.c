#include <stdio.h>

int main(void) {
    double inputX, inputY;

    int isContinue = 0;

    do {
        printf("2つの実数を入力してください\n");

        printf("X: ");
        scanf("%lf", &inputX);
        printf("Y: ");
        scanf("%lf", &inputY);

        puts("演算を選択してください:");
        printf("1: 加算 2: 減算 3: 乗算 4: 除算:");

        int inputOperation;
        scanf("%d", &inputOperation);

        if (inputOperation == 1) {  // 加算
            printf("%lf + %lf = %lf\n", inputX, inputY, inputX + inputY);

        } else if (inputOperation == 2) {  // 減算
            printf("%lf - %lf = %lf\n", inputX, inputY, inputX - inputY);

        } else if (inputOperation == 3) {  // 乗算
            printf("%lf * %lf = %lf\n", inputX, inputY, inputX * inputY);

        } else if (inputOperation == 4) {  // 除算
            printf("%lf / %lf = %lf\n", inputX, inputY, inputX / inputY);

        } else {
            printf("Errror!\n");
        }

        printf("続けますか? (0: 続ける 1: 終了): ");
        scanf("%d", &isContinue);
    } while (isContinue == 0);

    return 0;
}


