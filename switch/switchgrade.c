#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0 - 100): ");
    scanf("%d", &marks);

    switch(marks / 10) {
        case 10:   // for marks = 100
        case 9:    // 90 - 99
            printf("Grade: A\n");
            break;
        case 8:    // 80 - 89
            printf("Grade: B\n");
            break;
        case 7:    // 70 - 79
            printf("Grade: C\n");
            break;
        case 6:    // 60 - 69
            printf("Grade: D\n");
            break;
        case 5:    // 50 - 59
            printf("Grade: E\n");
            break;
        case 4:    // 40 - 49
        case 3:
        case 2:
        case 1:
        case 0:    // 0 - 39
            printf("Grade: F (Fail)\n");
            break;
        default:
            printf("Invalid Marks!\n");
    }

    return 0;
}
