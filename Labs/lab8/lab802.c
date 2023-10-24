/* 
NAME: HAMZA SHEIKH
DATE: 24/10/23
DESCRIPTION:  developing a calculator
*/

#include <stdio.h>

void calculate(double num1, double num2, char ope) { //defining a function
    switch (ope) {
        case '+':
            printf("%lf + %lf = %lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%lf - %lf = %lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%lf * %lf = %lf", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%lf / %lf = %lf", num1, num2, num1 / num2);
            } else {
                printf("Division by zero is not allowed.");
            }
            break;
        default:
            printf("Invalid operator");
    }
}

int main() {
    double a, b;
    char ope;

    printf("Enter two numbers: "); //taking input
    scanf("%lf %lf", &a, &b);
    
  while (getchar() != '\n'); 
    
    printf("Enter the operation (+, -, *, /): ");
    scanf("%c", &ope);

    calculate(a, b, ope); // calling the function

    return 0;
}
