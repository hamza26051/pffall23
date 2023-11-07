#include <stdio.h>

int fibonacci(int a, int b, int n) {
    if (n == 0) {
        return a;
    } else {
        return fibonacci(b, a + b, n - 1);
    }
}

int main() {
    int n;
    int a = 0;
    int b = 1;
    int i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input.\n");
    } else {
        for ( i = 0; i < n; i++) {
            printf("%d ", fibonacci(a, b, i));
        }
        printf("\n");
    }

    return 0;
}
