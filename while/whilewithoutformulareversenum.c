#include <stdio.h>

int main() {
    int num, digit;
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
        return 0;
    }

    if (num < 0) {
        printf("-");
        num = -num;
    }

    while (num != 0) {
        digit = num % 10;
        printf("%d", digit);
        num = num / 10;
    }

    return 0;
}
