#include <stdio.h>
#include <stdlib.h>

enum DataType {
    INT,
    DOUBLE,
    CHAR,
};

void printArray(void *arr, size_t size, size_t elementSize, enum DataType dataType) {
    char *ptr = (char *)arr;
    size_t j;

    for (j = 0; j < size; ++j) {
        switch (dataType) {
            case INT:
                printf("%d", *((int *)ptr));
                break;
            case DOUBLE:
                printf("%.2f", *((double *)ptr));
                break;
            case CHAR:
                printf("%c", *((char *)ptr));
                break;
        }

        ptr += elementSize;

        if (j < size - 1) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    int *intArray = (int *)malloc(5 * sizeof(int));
    double *doubleArray = (double *)calloc(5, sizeof(double));
    char *charArray = (char *)malloc(5 * sizeof(char));
    int i;

    for (i = 0; i < 5; ++i) {
        intArray[i] = i + 1;
        doubleArray[i] = (i + 1) * 1.1;
        charArray[i] = 'a' + i;
    }

    printf("Printing intArray: ");
    printArray(intArray, 5, sizeof(int), INT);

    printf("Printing doubleArray: ");
    printArray(doubleArray, 5, sizeof(double), DOUBLE);

    printf("Printing charArray: ");
    printArray(charArray, 5, sizeof(char), CHAR);

    free(intArray);
    free(doubleArray);
    free(charArray);

    return 0;
}
