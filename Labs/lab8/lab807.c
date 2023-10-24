/*
NAME: HAMZA SHEIKH
DATE: 24/10/23
DESCRIPTION: The program
should have a user-defined function named calculateDiscount that takes two
parameters: the customer's total purchase amount and the number of times they
have visited the shop in the past monTH.
*/


#include <stdio.h>
void calculateDiscount(float visit, float pay, float amount, float discount ){       //DEFINING A FUNCTION
	if (visit>10 && pay>=50){
		discount= pay*15/100 ;
		amount= pay - discount;
	}
	 else if (visit>5 && pay>=30){
		discount= pay*10/100;
		amount= pay - discount;
	}
	else{
		amount=pay;
	}
	printf(" The total amount is : %f \n", amount);
	
}
int main()
{
	float a;
	float b;
	float c;
	float d;
	printf(" Enter the number of visits : \n");   //TAKING INPUTS
	scanf("%f", &a);
		printf(" Enter the number of amount of items : \n");
	scanf("%f", &b);
	calculateDiscount(a, b, c, d);    //CALLING A FUNCTION
	return 0;
}
