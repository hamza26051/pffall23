#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
   
    int i;
    for ( i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


void fillWithPrimes(int **arr, int rows, int cols) {
    int currentNum = 2;
   
    int i,j;
    for ( i = 0; i < rows; ++i) {
        for ( j = 0; j < cols; ++j) {
           
            while (!isPrime(currentNum)) {
                ++currentNum;
            }

           
            arr[i][j] = currentNum;
            ++currentNum;
        }
    }
}


void printArray(int **arr, int rows, int cols) {
    int i,j;
for ( i = 0; i < rows; ++i) {
        for ( j = 0; j < cols; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols,i;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    
    int **primeArray = (int **)malloc(rows * sizeof(int *));
    for ( i = 0; i < rows; ++i) {
        primeArray[i] = (int *)malloc(cols * sizeof(int));
    }

   
    fillWithPrimes(primeArray, rows, cols);

 
    printf("\n2D Array filled with consecutive prime numbers:\n");
    printArray(primeArray, rows, cols);

   
    for ( i = 0; i < rows; ++i) {
        free(primeArray[i]);
    }
    free(primeArray);

    return 0;
}
