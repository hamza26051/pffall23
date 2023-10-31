/*
	Name: HAMZA Sheikh
	Date: 29/10/2023
	Description: sum of elements of sub matrix equal to the targent number
*/
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    int t;

    printf("Enter a target number: ");
    scanf("%d", &t);

    for (int i = 0; i < size; i++) {
        printf("Enter the value for element %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("You entered the following array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\nPairs that sum to %d are:\n", t);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] + array[j] == t) {
                printf("%d %d\n", array[i], array[j]);
            }
        }
    }

    return 0;
}
