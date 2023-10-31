/*
Programmer: HAMZA SHEIKH
DATE: 28/10/23
Description: TO DISPLAY RAMANUJAN HARDY NUMBER
*/


#include <stdio.h>
#include <math.h>

int Ramanujan_Hardy(int num);


int main() {
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);

	printf("Ramanujan numbers less than %d^3:\n", n);
	
	for(int num = 1; num < n * n * n; num++) {
	    if(Ramanujan_Hardy(num)) {
	        printf("%d\n", num); 
	    }
	}
}


int Ramanujan_Hardy(int num) {
	int count = 0;
	for(int i = 1; (i * i * i) < num; i++) {
		for(int j = i; (j * j * j) < num; j++) {
			if(pow(i,3) + pow(j,3) == num) {
				count++;
			}
		}
	}
	return count == 2;
}
	
	
