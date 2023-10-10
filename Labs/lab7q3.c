/*
Name: HAMZA SHEIKH
date: 10/10/2023
purpose: print sum of a number
*/

#include <stdio.h>
int main(){
	int num;
	printf(" enter number");
	scanf("%d", &num);
	int n;
	int i;
	int sum=0;
	while (num !=0){
	
		i= num%10;
		sum= sum+i;
		num=num/10;
	} 
	printf(" the sum is %d", sum);
	return 0;
}
