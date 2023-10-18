/*  NAME: HAMZA SHEIKH
	DATE: 18/10/23
	DESCRIPTION: PRINTING ARRAY IN ASCENDING ORDER
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the value %d ", i);
        scanf("%d", &array[i]);
    }

    /
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n -i- 1; j++) {
            if (array[j] > array[j+1]) {
               
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("Array in ascending order ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
