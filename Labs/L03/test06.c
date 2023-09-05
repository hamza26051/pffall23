#include<stdio.h>

int main(){
	int south= 15;
	int west= 10;
	int north= 15;
	int fuel= 2;
	int t=north+south+west;
	printf(" the total distance is %d \n" , t);
	int f= fuel * t;
	printf("the total fuel consumption is %d \n" , f);

		return 0;
}
