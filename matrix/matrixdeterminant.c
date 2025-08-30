#include <stdio.h>

int main() {
    int n;
    printf("Enter order of the square matrix (2 or 3): ");
    scanf("%d", &n);

    if (n != 2 && n != 3) {
        printf("This program supports only 2x2 or 3x3 matrices.\n");
        return 0;
    }

    int matrix[n][n];

    // Input elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = 0;

    if (n == 2) {
        det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    } else if (n == 3) {
        det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
            - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
            + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    }

    printf("Determinant = %d\n", det);

    return 0;
}
