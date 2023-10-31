/*
	Name: HAMZA Sheikh
	Date: 26/10/2023
	Description: Finding the largest square sub matrix of 1s in a matrix
*/

#include <stdio.h>

void disp_mat(int matrix[][100], int r, int c);
void inp_matrix(int matrix[][100], int r, int c);
int sum_submatrix(int matrix[][100], int start_r, int start_c, int size);
int find_largest_sq(int matrix[][100], int r, int c);

int main() {
    int r, c;
	int matrix[100][100] = {0};

    do { //taking input for the size of the matrix
        printf("Enter rows of matrix: ");
        scanf("%d", &r);
        printf("Enter columns of matrix: ");
        scanf("%d", &c);
    } while (r<2 || c<2);

    inp_matrix(matrix, r, c); //function for the input of the mtrix is called

    printf("Your matrix:\n");
    disp_mat(matrix, r, c); //function to display the matrix is called

    int largestSquareSize = find_largest_sq(matrix, r, c);

    if (largestSquareSize) {
        printf("Largest square matrix of size %dx%d found\n", largestSquareSize, largestSquareSize);
    } else {
        printf("No square matrix of size >= 2x2 found\n");
    }

    return 0;
}

//function defined for displaying the function
void disp_mat(int matrix[][100], int r, int c) { 
    int i, j; 
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%-*d", r, matrix[i][j]);
        }
        printf("\n");
    }
}

//function defined for taking the inputs for the matrix
void inp_matrix(int matrix[][100], int r, int c) {
    int i, j; // Declare loop variables outside the loop statements
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

//function defined to determine the sum of all the elements in a square sub matrix
int sum_submatrix(int matrix[][100], int start_r, int start_c, int size) {
    int sum = 0;
    int i, j; 
    for (i = start_r; i < start_r + size; i++) {
        for (j = start_c; j < start_c + size; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

//function defined to determine the largest square sub matrix of 1s
int find_largest_sq(int matrix[][100], int r, int c) {
    int maxSize = (r < c) ? r : c;
    int i, j; 

    while (maxSize >= 2) {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (i + maxSize <= r && j + maxSize <= c &&
                    sum_submatrix(matrix, i, j, maxSize) == maxSize * maxSize) {
                    return maxSize;
                }
            }
        }

        maxSize--;
    }

    return 0;
}

