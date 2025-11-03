#include <stdio.h>

int main() {
    int a[5][5];
    int rows, cols;
    int i, j;
    int square = 0, zero = 1, identity = 1, diagonal = 1, scalar = 1, upper = 1, lower = 1, symmetric = 1;

    printf("Enter number of rows (max 5): ");
    scanf("%d", &rows);
    printf("Enter number of columns (max 5): ");
    scanf("%d", &cols);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if square
    if (rows == cols)
        square = 1;

    // Go through each element
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (a[i][j] != 0)
                zero = 0;

            if (i == j) {
                if (a[i][j] != 1)
                    identity = 0;
            } else {
                if (a[i][j] != 0)
                    identity = 0;
            }

            if (i != j && a[i][j] != 0)
                diagonal = 0;

            if (i > j && a[i][j] != 0)
                upper = 0;

            if (i < j && a[i][j] != 0)
                lower = 0;

            if (rows == cols && a[i][j] != a[j][i])
                symmetric = 0;
        }
    }

    // Check if scalar (all diagonal same)
    if (square && diagonal) {
        int val = a[0][0];
        for (i = 0; i < rows; i++) {
            if (a[i][i] != val)
                scalar = 0;
        }
    } else {
        scalar = 0;
    }

    printf("\nMatrix Types:\n");

    if (square)
        printf("Square Matrix\n");
    else
        printf("Rectangular Matrix\n");

    if (zero)
        printf("Zero Matrix\n");

    if (identity)
        printf("Identity Matrix\n");

    if (diagonal)
        printf("Diagonal Matrix\n");

    if (scalar)
        printf("Scalar Matrix\n");

    if (upper)
        printf("Upper Triangular Matrix\n");

    if (lower)
        printf("Lower Triangular Matrix\n");

    if (symmetric)
        printf("Symmetric Matrix\n");

    return 0;
}
