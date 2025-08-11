#include <stdio.h>

int main() {
    int num, digit;
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
        return 0;
    }
    do {
        digit = num % 10;    // get last digit
        printf("%d", digit); // directly print it
        num = num / 10;      // remove last digit
    } while (num != 0);

    return 0;
}
