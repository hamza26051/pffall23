#include<stdio.h>
int main(){

int a;
printf(" enter a number n");
scanf(" %d", &a);

if ( a%3==0)
{ 
printf ("\nthis number is a multiple of 3");
}
else
{
printf(" this number is not a multiple of 3");
}
return 1;
}