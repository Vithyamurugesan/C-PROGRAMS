#include <stdio.h>

int main() {
    int n, i, j;
    float temp;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n];

    // Input array elements
    printf("Enter %d float numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Sorting in Ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nArray in Ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    // Sorting in Descending order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n\nArray in Descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
