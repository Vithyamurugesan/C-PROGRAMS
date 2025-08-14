#include <stdio.h>

int main() {
    int num1, num2, gcd = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int min = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= min; i++) {
        int caseFlag = (num1 % i == 0 && num2 % i == 0) ? 1 : 0;

        switch (caseFlag) {
            case 1:
                gcd = i; // Update GCD
                break;
            case 0:
                // Do nothing
                break;
        }
    }

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
