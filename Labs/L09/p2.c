#include <stdio.h>
int multi(int a, int b){
	if (a==0 || b==0){
		return 0;
	}
	if (b>0){
		return (a + multi (a,b-1));
	}
	if (b<0){
		return -multi(a,-b);
	}
}
int main(){
	int j;
	int k;
	printf(" enter number 1");
	scanf("%d", j);
	printf(" enter number 2");
	scanf("%d", k);
	printf("%d", multi (j,k));
	return 0;
}
