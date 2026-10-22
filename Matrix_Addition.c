#include <stdio.h>

int main() {
    int r, c, i, j;
    int mat1[100][100], mat2[100][100], sum[100][100];

    // Get the number of rows and columns from the user
    printf("Enter the number of rows (1-100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (1-100): ");
    scanf("%d", &c);

    // Input elements for the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Adding corresponding elements of both matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Displaying the resulting sum matrix in matrix format
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d \t", sum[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}