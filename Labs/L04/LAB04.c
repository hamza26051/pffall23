/*
* Programmer: Hamza Sheikh
* Date: 12/09/23
* Description: print the pattern for any number of n
*/

//--Include Files--//
#include <stdio.h>

int main(){
int n;

char ch= '*';
printf("enter a number n");
scanf("%d", &n);
int i=0;
do  {
i++;
} while (i<n);

printf("*");
return 0;
}