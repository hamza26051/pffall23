#include <stdio.h>
#include <stdlib.h>


void fun(void* array, int size, int datatype) {
    
    int i;
    for ( i = 0; i < size; i++) {
        if (datatype == 1) {
           
            ((int*)array)[i] = i + 1;
            printf("%d ", ((int*)array)[i]);
        } else if (datatype == 2) {
            \
            ((char*)array)[i] = 'u' + i;
            printf("%c ", ((char*)array)[i]);
        } else if (datatype == 3) {
            
            ((double*)array)[i] = i + 5;
            printf("%lf ", ((double*)array)[i]);
        }
    }
}

int main() {
    int i;
    int n;
    
    printf("Enter the numeric value for datatype: 1 for integer, 2 for char, and 3 for double\n");
    scanf("%d", &n);

    int *intarray = (int *)malloc(i * sizeof(int));
    char *chararray = (char *)malloc(i * sizeof(char));
    double *doublearray = (double *)malloc(i * sizeof(double));

    
    for (i = 0; i < 5; i++) {
        
        if (n == 1)
            fun(intarray, i, n);
        else if (n == 2)
            fun(chararray, i, n);
        else if (n == 3)
            fun(doublearray, i, n);
    }

    free(intarray);
    free(doublearray);
    free(chararray);

    return 0;
}
