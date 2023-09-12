#include <stdio.h>
#include <math.h>
int main(){
float a;
float b;
float c;

printf("enter an integer a");
scanf("%f", &a);
printf("enter an integer b");
scanf("%f", &b);
printf("enter an integer c");
scanf("%f", &c);

float q= -b+ sqrt(b*b -4*a*c)/(2*a);
float r= -b- sqrt(b*b -4*a*c)/(2*a);


printf("%f %f", q, r);
return 0;
}