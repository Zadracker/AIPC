/*
1. matrix multiplication - input, multiply, display (r1,r2,c1,c2 rows and cols of respective matrices)
*/


#include <stdio.h>

void matrix_multiplication(int r1, int c1, int r2, int c2, int m1[r1][c1], int m2[r2][c2], int m3[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            m3[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &c1);
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &c2);
    if (c1 != r2) {
        printf("Error: These matrices can't be multiplied. The number of columns in the first matrix must equal the number of rows in the second matrix.\n");
        return 1;
    }
    int m1[r1][c1];
    int m2[r2][c2];
    int m3[r1][c2];
    printf("\nEnter elements for the first matrix (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Enter element m1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\nEnter elements for the second matrix (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Enter element m2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    matrix_multiplication(r1, c1, r2, c2, m1, m2, m3);
    printf("\nResultant Matrix:\n");
    print_matrix(r1, c2, m3);

    return 0;
}
