/**
 * Programmer: Hamza sheikh 
 * Desc: Max Subset Matrix in 2x2 or 4x4 or 8x8
 * Date: 10/12/2023
 * Roll-No: 23K-0060
 */ 
 #include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void student(char name[]);
void subset(int row, int col, int **arr, int **newarr);

int main(int argc, char const *argv[]) {
    // Checks if file name has been input as well and not just the code been run.
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // open file, argv[1] contains the name of the file
    FILE *ptr = fopen(argv[1], "r");

    // if file isn't opened then end the program
    if (ptr == NULL) {
        printf("FILE DIDN'T OPEN, PROGRAM ENDS!\n");
        return 1;
    }

    char name[8];
    printf("Enter Id: ");
    int i, j;
    getchar();
    fgets(name, 8, stdin);

    // ask the user for rows and columns
    int row, col;
    printf("Enter Rows, Column of the Matrix: ");
    scanf("%d %d", &row, &col);

    // declaring a 2d array using malloc
    int **arr = (int **)malloc(row * sizeof(int *));
    for (i = 0; i < row; i++)
        arr[i] = (int *)malloc(col * sizeof(int));

    // entering the values from the file into the array using fscanf as it takes integers directly
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            fscanf(ptr, "%d", &arr[i][j]);
    }

    // declaring the new array which will contain the max values
    // row/2 and col/2 as that is the new array size
    int **newarr = (int **)calloc(row / 2, sizeof(int *));
    for (i = 0; i < row / 2; i++)
        newarr[i] = (int *)calloc(col / 2, sizeof(int));

    // function call
    subset(row, col, arr, newarr);

    // printing the updated contents of the array
    student(name);
    for (i = 0; i < row / 2; i++) {
        for (j = 0; j < col / 2; j++)
            printf("%d ", newarr[i][j]);
        printf("\n");
    }

    // closing file
    fclose(ptr);

    // deallocating the arrays
    for (i = 0; i < row; i++)
        free(arr[i]);
    free(arr);
    for (i = 0; i < row / 2; i++)
        free(newarr[i]);
    free(newarr);

    return 0;
}

void subset(int row, int col, int **arr, int **newarr) {
    // newrow and newcol basically to remember the location of newarr
    int newrow = 0, newcol = 0;
    int i, j, a, b;

    // loops +2 each time as 2x2 matrixes max are to be found each time
    for (i = 0; i < row; i += 2) {
        // each time we move to a new row of the arr, reset the value of newcol to zero
        newcol = 0;
        // +2 cols each time as 2x2 matrixes max are to be found each time
        for (j = 0; j < col; j += 2) {
            // finding the largest
            int largest = arr[i][j];
            for (a = i; a < i + 2; a++) {
                for (b = j; b < j + 2; b++) {
                    if (arr[a][b] > largest)
                        largest = arr[a][b];
                }
            }
            // storing the largest in the newarr
            newarr[newrow][newcol] = largest;
            newcol++;
        }
        newrow++;
    }
}

void student(char name[]) {
    int i;
    printf("my name is Hamza Sheikh\nStudent Id: ");
    for (i = 3; i < strlen(name); i++)
        printf("%c", name[i]);
    printf("\n");
}

