/*
* Programmer: Hamza Sheikh
* Date: 12/09/23
* Description: print the pattern for any number of n
*/

//--Include Files--//
#include <stdio.h>

int main(){
int n;
int q=1;
printf("enter a number n");
scanf("%d", &n);
while(q<=n){
int h=1;
while(h<=n){
printf("*");
h++;
}
printf("\n");
q++;
}


}