#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    int i, j, k;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &m2, &n2);
    if (n1 != m2) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }
    int matrix1[m1][n1], matrix2[m2][n2], result[m1][n2];
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            result[i][j] = 0;
        }
    }
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < m2; j++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            for (k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
