#include <stdio.h>
#include <math.h>
int main(){
float a;
float b;
float c;
float x;

printf("enter an integer a");
scanf("%f", &a);
printf("enter an integer b");
scanf("%f", &b);
printf("enter an integer c");
scanf("%f", &c);
printf(" enter the value of x");
scanf("%f", &x);

float q= a * (x*x)+ b*x+c;


printf("%f", q);
return 0;
}