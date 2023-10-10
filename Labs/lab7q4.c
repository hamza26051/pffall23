#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    if (n != m) {
        printf("It is not square\n");
        return 0;
    }

    int matrix[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int Symmetric = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                Symmetric = 0;
                break;
            }
        }
        if (!Symmetric) {
            break;
        }
    }

    if (Symmetric) {
        printf("Matrix is Symmetric\n");
    } else {
        printf("Matrix is not symmetric\n");
    }

    return 0;
}

