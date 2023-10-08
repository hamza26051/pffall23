#include <stdio.h>
int main(){
int i;
printf("enter the number of value");
scanf(" &d", &i);
int n=0;
int max;
int min;


int array[n];
for (; n>=i; n++){
	
printf("enter value");
scanf(" %d" , &array[n]);
printf(" %d", array[n]);
	 max= array [0];
	 min= array[0];
	if (array[n]> max){
		max= array[n];
	}
	if (array[n]< min){
	
	 min= array[n];
}



}
printf(" the maximum number is %d", max);
printf(" the minimum number is %d", min);


return 0;
}
