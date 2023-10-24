/* 
NAME: HAMZA SHEIKH
DATE: 24/10/23
DESCRIPTION: taking car number and day to print if we should the car on that day or not
*/


#include <stdio.h>
int decidecaruse(int num, int day){
	if ((num % 2==0 && day %2 ==0) || (num% 2 !=0 && day %2 !=0)){
		return 1;
	}
	else {
		return 0;
	}
	}
	int main(){
		int num, day;
		printf(" enter car number");
		scanf("%d", &num);
		printf(" enter the day");
		scanf("%d", &day);
		if (decidecaruse(num, day)){
			printf(" you should use your car on this day");
		} else{
			printf(" you should not use car on this day");
		}
		return 0;
	}

