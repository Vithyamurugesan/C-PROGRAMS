#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int choice;
    if (a > b)
        choice = 1;
    else if (b > a)
        choice = 2;
    else
        choice = 0;

    switch (choice) {
        case 1:
            printf("Maximum is: %d\n", a);
            break;
        case 2:
            printf("Maximum is: %d\n", b);
            break;
        case 0:
            printf("Both numbers are equal\n");
            break;
    }

    return 0;
}
