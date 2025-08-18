#include <stdio.h>

int main() {
    int day, month, year;
    int h, q, m, k, j;

    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Adjust month and year for Zeller's formula
    if (month == 1) {
        month = 13;
        year--;
    }
    else if (month == 2) {
        month = 14;
        year--;
    }

    q = day;
    m = month;
    k = year % 100;
    j = year / 100;

    // Zeller's Congruence formula
    h = (q + (13*(m + 1))/5 + k + (k/4) + (j/4) + (5*j)) % 7;

    // Map result to day name
    if (h == 0) printf("Saturday\n");
    else if (h == 1) printf("Sunday\n");
    else if (h == 2) printf("Monday\n");
    else if (h == 3) printf("Tuesday\n");
    else if (h == 4) printf("Wednesday\n");
    else if (h == 5) printf("Thursday\n");
    else if (h == 6) printf("Friday\n");

    return 0;
}
