#include <stdio.h>

void reverse(int *arr, int size) {
    int *start = arr;         
    int *end = arr + size - 1;

    while (start < end) {
        
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[10];
    int size = 10;

   
    printf("Enter 10 integers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    reverse(arr, size);

   
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
