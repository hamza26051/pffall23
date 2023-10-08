#include <stdio.h>
int main(){
	int i=0;
	for (; i<=6; i++){
	 	if ( i%2==0){
		printf("%d      %d      %d      %d \n", i, i, i, i);
		}
			else{
			printf("       %d             %d \n", i, i);
			}
		}
	return 0;
	}
