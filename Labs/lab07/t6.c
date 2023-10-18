/*  NAME: HAMZA SHEIKH
	DATE: 18/10/23
	DESCRIPTION: FINDING THE FREQUENCY
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the quantity of values");
    scanf("%d", &n);

    int array[n];
    int fre[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the value %d", i);
        scanf("%d", &array[i]);
        fre[i] = 0; 
    }

    for (int i = 0; i < n; i++) {
        if (fre[i] != -1) {
            int q = 1;
            for (int j = i + 1; j < n; j++) {
                if (array[i] == array[j]) {
                    q++;
                    fre[j] = -1; 
                }
            }
            fre[i] = q; 
        }
    }

    for (int i = 0; i < n; i++) {
        if (fre[i] != -1) { 
            printf("The frequency of %d is %d", array[i], fre[i]);
        }
    }

    return 0;
}
