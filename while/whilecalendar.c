#include <stdio.h>

int main() {
    int days, startDay;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day (1=Mon, 2=Tue, ..., 7=Sun): ");
    scanf("%d", &startDay);

    printf("\nMon Tue Wed Thu Fri Sat Sun\n");

    // Print initial spaces before first date
    int spaceCount = 1;
    while (spaceCount < startDay) {
        printf("    ");
        spaceCount++;
    }

    // Print the dates
    int day = 1;
    do {
        printf("%3d ", day);

        // New line after Sunday
        if ((day + startDay - 1) % 7 == 0) {
            printf("\n");
        }

        day++;
    } while (day <= days);

    printf("\n");
    return 0;
}
