/*  NAME: HAMZA SHEIKH
	DATE: 18/10/23
	DESCRIPTION: CALCULATING SUM OF THE BILL OF MOBILE IDS ALONGWITH THEIR BRANCH ID
*/


#include <stdio.h>

int main() {
    int n;
    int m;
    int sumall = 0;
    printf("Enter the number of mobile ids: ");
    scanf("%d", &n);
    printf("Enter the number of branch ids: ");
    scanf("%d", &m);

    int array[n][m];
    int array1[m];
    int array2[n][m];
    int high = 0;
    int l = 0;
    int highe = 0;
    int h = 0;
    int u = 0;

    for (int i = 0; i < m; i++) {
        int sumbr = 0;
        for (int j = 0; j < n; j++) {
            printf("Enter the amount of bill of mobile id %d for branch id %d: ", j, i);
            scanf("%d", &array[j][i]);
            sumbr += array[j][i];
            sumall += array[j][i];
            array2[j][i] = sumbr;

            if (array2[j][i] > highe) {
                highe = array2[j][i];
                h = i;
                u = j;
            }
        }
        printf("The sum of branch %d is %d\n", i, sumbr);
        array1[i] = sumbr;

        if (array1[i] > high) {
            high = array1[i];
            l = i;
        }
    }

    printf("The maximum bill for the branch id %d and mobile id %d is %d\n", h, u, highe);
    printf("The maximum bill for the branch is of branch %d which is %d\n", l, high);
    printf("The total sum of all branches is %d\n", sumall);

    return 0;
}
