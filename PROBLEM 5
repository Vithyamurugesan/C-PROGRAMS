/*Find the sum of odd index that has even value and even index that has odd value.*/
#include<stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int evenValueOddIndexSum = 0, oddValueEvenIndexSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0 && arr[i] % 2 == 0) { 
            // Odd index & even value
            evenValueOddIndexSum += arr[i];
        }
        if (i % 2 == 0 && arr[i] % 2 != 0) { 
            // Even index & odd value
            oddValueEvenIndexSum += arr[i];
        }
    }

    printf("Sum of even values at odd indices: %d\n", evenValueOddIndexSum);
    printf("Sum of odd values at even indices: %d\n", oddValueEvenIndexSum);

    return 0;
}
