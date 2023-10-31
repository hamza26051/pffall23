#include <stdio.h>
//we were assigning the value of b to a and then assigning the same value to b, also we were using a printf statement after calling the function
void swap(int a, int b){
	int temp=a;
	a=b;
	b=temp;
	printf("j=%d, k=%d \n", a,b);
}
int main(){
	int j=2;
	 int k=5;
	printf("j=%d, k=%d\n", j, k);
	swap (j,k);   
	return 0;
}



