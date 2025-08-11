#include <stdio.h>

int main() {
    float basic, hra, da, gross;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra);

    printf("Enter DA percentage: ");
    scanf("%f", &da);

    gross = basic + (basic * hra / 100) + (basic * da / 100);

    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
