#include <stdio.h>
#include <math.h>
int main ()
{
float a;
float b;
float c;
printf(" enter value of a \n");
scanf ("%f", &a);
printf(" enter value of b");
scanf ("%f", &b);
printf(" enter value of c");
scanf ("%f", &c);
float root1= (-b + sqrt(b*b -4*a*c))/(a*2);
printf(" one root is %f" , root1);
float root2= (-b - sqrt(b*b -4*a*c))/(a*2);
printf(" one root is %f" , root2);
float discriminant= b*b - 4*a*c;
printf(" discriminant is %f" , discriminant);
if (discriminant>0)
{
printf(" the roots are real and distinct");
}
else if ( discriminant=0)
{
printf(" the root are equal and repeated");
}
else
{
printf(" the roots are complex");
}
 return 0;
}
