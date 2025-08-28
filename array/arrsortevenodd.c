#include <stdio.h>

// Function to sort an array in ascending order (simple Bubble Sort)
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], even[n], odd[n];
    int e = 0, o = 0;

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even[e++] = arr[i];  // store even
        else
            odd[o++] = arr[i];   // store odd
    }

    // Sort even and odd separately
    sortArray(even, e);
    sortArray(odd, o);

    // Print results
    printf("Sorted Even elements: ");
    for (int i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nSorted Odd elements: ");
    for (int i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}
