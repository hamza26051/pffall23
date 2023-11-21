#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplyAndDivide(int** array, int rows, int cols) {
	int i;
	int j;
    for ( i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            array[i][j] = (array[i][j] * 3) / 2;
        }
    }
}

int main() {
    
    int i, j;
    clock_t start, end;
    double cpu_time_used;

    
    int M1 = 800;
    int N1 = 800;
    int** array1 = (int**)malloc(M1 * sizeof(int*));
    for ( i = 0; i < M1; i++) {
        array1[i] = (int*)malloc(N1 * sizeof(int));
    }

    
    int M2 = 800;
    int N2 = 800;
    int** array2 = (int**)malloc(M2 * sizeof(int*));
    int* data2 = (int*)malloc(M2 * N2 * sizeof(int));
    for ( i = 0; i < M2; i++) {
        array2[i] = data2 + i * N2;
    }

    
    for ( i = 0; i < M1; i++) {
        for ( j = 0; j < N1; j++) {
            array1[i][j] = i * N1 + j;
        }
    }

    for ( i = 0; i < M2; i++) {
        for ( j = 0; j < N2; j++) {
            array2[i][j] = i * N2 + j;
        }
    }

   
    start = clock();
    multiplyAndDivide(array1, M1, N1);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Array1 (Multiple malloc calls): %f seconds\n", cpu_time_used);

    
    start = clock();
    multiplyAndDivide(array2, M2, N2);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Array2 (Direct allocation and array of pointers): %f seconds\n", cpu_time_used);

  
    for (i = 0; i < M1; i++) {
        free(array1[i]);
    }
    free(array1);

    free(array2[0]);
    free(array2);

    return 0;
}
