#include <stdio.h>

void swap(void* x, void* y, int size) {
    unsigned char* byte_x = x;
    unsigned char* byte_y = y;
    int i;
    for (i = 0; i < size; ++i) {
        *byte_x ^= *byte_y;
        *byte_y ^= *byte_x;
        *byte_x ^= *byte_y;

        
        ++byte_x;
        ++byte_y;
    }
}

int main() {
    unsigned char x;
    unsigned char y;

    printf("Enter the value of x: ");
    scanf("%hhu", &x);

    printf("Enter the value of y: ");
    scanf("%hhu", &y);

    printf("The value of x is: %hhu\n", x);
    printf("The value of y is: %hhu\n", y);

    swap(&x, &y, sizeof(unsigned char));

    printf("After swap: x = %hhu, y = %hhu\n", x, y);

    return 0;
}
