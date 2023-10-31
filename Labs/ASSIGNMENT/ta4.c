/*
	Name: HAMZA Sheikh
	Date: 26/10/2023
	Description: to solve a maze game
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    char matrix[n][n];
    int i, j, sp_i, sp_j, ep_i, ep_j;

    int os[n * n][2]; 
    int nos = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the value for row %d and column %d (s for starting point, e for ending point, w for walls, o for open space): ", i, j);
            scanf(" %c", &matrix[i][j]);

            if (matrix[i][j] == 'o') {
                os[nos][0] = i;
                os[nos][1] = j;
                nos++;
            }
        }
    }

    int sp_found = 0;
    int ep_found = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == 's') {
                if (sp_found == 0) {
                    sp_i = i;
                    sp_j = j;
                    sp_found = 1;
                } else {
                    printf("Error! There should be only one starting point.\n");
                    exit(1);
                }
            } else if (matrix[i][j] == 'e') {
                if (ep_found == 0) {
                    ep_i = i;
                    ep_j = j;
                    ep_found = 1;
                } else {
                    printf("Error! There should be only one ending point.\n");
                    exit(1);
                }
            } else if (matrix[i][j] != 'w' && matrix[i][j] != 'o') {
                printf("Error! Enter elements 's', 'e', 'w', or 'o' only.\n");
                exit(1);
            }
        }
    }

    if (sp_found == 0) {
        printf("Error! No starting point found.\n");
        exit(1);
    }

    if (ep_found == 0) {
        printf("Error! No ending point found.\n");
        exit(1);
    }

   
    printf("%d %d \n", sp_i, sp_j);

  
    for (i = 0; i < nos; i++) {
        printf("(%d,%d)\n", os[i][0], os[i][1]);
    }

    printf(" %d,%d \n", ep_i, ep_j);

    return 0;
}

