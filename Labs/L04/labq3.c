/*
* Programmer: Hamza Sheikh
* Date: 12/09/23
* Description: ask a number and print their square
*/

//--Include Files--//
#include <stdio.h>
#include <math.h>

int main(){
int i=1;
int n;
int q;
float sqr;
float sum=0;
printf("enter number of integers");
scanf("%d", &q);
do{
i++;
printf("enter a number");
scanf("%d", &n);
sqr= n*n;
sum=sum +sqr;
}while(i<=q);
printf(" print sum %f", sum);

return 0;
}