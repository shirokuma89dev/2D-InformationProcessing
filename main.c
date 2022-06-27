#include <stdio.h>

int main(void) {
    int month;

    printf("月を入力してください: ");
    scanf("%d", &month);

    if (0 < month && month < 13) {
        int days;
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                days = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                days = 30;
                break;
            case 2:
                days = 28;
                break;
            default:
                days = 0;
                break;
        }
        printf("%d月は%d日あります。\n", month, days);
    } else {
        puts("そんな月はありません");
    }

    return 0;
}
