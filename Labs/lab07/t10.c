/*  NAME: HAMZA SHEIKH
	DATE: 18/10/23
	DESCRIPTION: PRINTING SUBARRAYS AND THEIR SUM WILL BE EQUAL TO S
*/

#include <stdio.h>

int main() {
    int s;
    int n;
    int sum = 0;

    printf("Enter the sum");
    scanf("%d", &s);

    printf("Enter the number of values");
    scanf("%d", &n);

    int array[n];
    int found = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter the value of number %d", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        if (found == 0) {
            sum = 0;

            for (int j = i; j < n; j++) {
                sum= sum + array[j];

                if (sum == s) {
                    found++;
                    printf("Subarray with sum %d found from index %d to %d ", s, i, j);
                    for (int k = i; k <= j; k++) {
                        printf("%d\n ", array[k]);
                    }
                }
            }
        }
    }

    return 0;
}
