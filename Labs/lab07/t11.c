/*  NAME: HAMZA SHEIKH
	DATE: 18/10/23
	DESCRIPTION: PRINTING A maxlocal matrix
*/

#include <stdio.h>

int main() {
    int n; 
    printf("Enter the size of the grid");
    scanf("%d", &n);

    int grid[n][n];

    
    printf("Enter the elements of the grid\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    
    if (n < 3) {
        printf("Grid is too small to generate maxLocal matrix\n");
        return 0;
    }

    int mls = n - 2;

    int ml[mls][mls];

   
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int mis = grid[i - 1][j - 1]; 

            
            for (int x = i - 1; x <= i + 1; x++) {
                for (int y = j - 1; y <= j + 1; y++) {
                    if (grid[x][y] > mis) {
                        mis = grid[x][y];
                    }
                }
            }

            ml[i - 1][j - 1] = mis;
        }
    }

   
    printf("maxLocal matrix\n");
    for (int i = 0; i < mls; i++) {
        for (int j = 0; j < mls; j++) {
            printf("%d ", ml[i][j]);
        }
        printf("\n");
    }

    return 0;
}
