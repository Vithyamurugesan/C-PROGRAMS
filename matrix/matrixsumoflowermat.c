#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input size of square matrix
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of lower triangular matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum += matrix[i][j];
        }
    }

    // Output result
    printf("Sum of lower triangular elements = %d\n", sum);

    return 0;
}
