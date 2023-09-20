#include <stdio.h>

int main() {
    int bitwise;
    printf("Enter an 8-digit binary number (1s and 0s only)");
    scanf("%d", &bitwise);

    int original = 1;
    for (int i = 0; i < 8; i++) {
        int digit = bitwise % 10;
        if ((i == 3 || i == 6) && digit == 1) {
           
            bitwise = bitwise - original;
        }
        original = original * 10; 
        printf("%d ", digit);
        bitwise = bitwise / 10;
    }

    return 0;
}





