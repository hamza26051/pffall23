/* 
NAME: HAMZA SHEIKH
DATE: 24/10/23
DESCRIPTION: SWAPPING THE INTEGERS
*/


#include <stdio.h>
void swap_integer(int a, int b){ //CREATING A FUNCTION
	int sum=b;
	b=a;
	a=sum;
	printf(" %d \n %d", a, b);
}
int main(){
	int a;
	int b;
	printf("enter the value 1"); 
	scanf("%d", &a);  //TAKING VALUE 1
	printf("enter the value 2");
	scanf("%d", &b);   //TAKING VALUE 2
	swap_integer(a,b); //CALLING THE FUNCTION
	return 0;
}
