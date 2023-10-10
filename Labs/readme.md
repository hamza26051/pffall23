

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    if (n != m) {
        printf("it is not square");
        return 0;
    }

    int matrix[n][m];
    printf("Enter the elements of the matrix");
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
        printf("Array is Symmetric");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Array is not symmetric");
    }

    return 0;
}
