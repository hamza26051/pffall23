#include <stdio.h>
int gcd (int a, int b){
	if (b==0){
		return a;
	}
	if (b !=0){
		return  gcd(b, a %b);
	}
}
int main(){
	int num1;
	int num2;
	printf("enter number 1: \n");
	scanf("%d", &num1);
		printf("enter number 2: \n");
	scanf("%d", &num2);
	printf("%d", gcd(num1, num2));
	return 0;
}
