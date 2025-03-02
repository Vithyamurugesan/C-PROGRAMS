/*Find the sum of first two digit and last two digit in a number.*/
#include <stdio.h>

int main() {
    int num = 184354; // Given number
    int firstTwo, lastTwo, temp;

    // Extract the last two digits
    lastTwo = num % 100;  

    // Extract the first two digits
    temp = num;
    while (temp >= 100) {
        temp /= 10;  // Remove digits until only the first two are left
    }
    firstTwo = temp;

    // Sum of first two and last two digits
    int result = firstTwo + lastTwo;

    // Print result
    printf("Sum of first two and last two digits: %d\n", result);

    return 0;
}
