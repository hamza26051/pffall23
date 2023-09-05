#include<stdio.h>

int main(){
	float first= 8;
	float second= 12;
	float third= 12;
	float fourth= 9;
	float weeks= 4;
	float total_hours= first + second + third + fourth;
	printf(" the total hours is %f \n" , total_hours);
	float avg= total_hours/ weeks;
	printf("the total fuel consumption is %f \n" , avg);

		return 0;
}
