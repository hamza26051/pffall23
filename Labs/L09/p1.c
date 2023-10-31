#include <stdio.h>


unsigned long long factorial(int n) {
 
    if (n == 0 || n == 1) {
        
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;

   
    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    int ans = factorial(n);
    printf("factorial of %d is %d", n, ans);

    return 0;
}

