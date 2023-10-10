/*
Name: HAMZA SHEIKH
date: 10/10/2023
purpose: dividing without dividing operator
*/







#include <stdio.h>

int main() {
    float a;
    float b;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);

    float rem = a;
    int i = 0;
    int q;

    if (b == 0) {
        printf(" Division by zero is not allowed");
    } else {
        if (a < b) {
            printf("The quotient is 0 and the remainder is %f", rem);
        } else {
            while (rem >= b) {
                rem = rem - b;
                i++;
            }
            q = i;
        }
        printf("The quotient is %d and remainder is %f", q, rem);
    }

    return 0;
}







