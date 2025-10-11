#include <stdio.h>

int main() {
    // Define enum for customer types
    enum CustomerType { Female = 1, Male, Other };
    
    int customer;
    float bill, discount = 0.0;

    printf("Enter bill amount: ");
    scanf("%f", &bill);

    printf("Enter customer type (1-Female, 2-Male, 3-Other): ");
    scanf("%d", &customer);

    // Apply discount using if-else
    if (customer == Female) {
        discount = 0.50 * bill;
    } else if (customer == Male) {
        discount = 0.25 * bill;
    } else if (customer == Other) {
        discount = 0.60 * bill;
    } else {
        printf("Invalid customer type!\n");
        return 1;
    }

    printf("Discount = %.2f\n", discount);
    printf("Amount to pay = %.2f\n", bill - discount);

    return 0;
}
