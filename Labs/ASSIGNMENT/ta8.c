/* PROGRAMMER: HAMZA SHEIKH
DATE: 30/10/23
DESCRIPTION: Multiplying the digits of an integer and continuing the process gives the surprising result that the sequence
of products always arrives at a single digit number.
*/
#include <stdio.h>
int main(){
	int n;
	printf("Enter a positive number (or press CTRL+D to end) :");
 while (	scanf("%d", &n) != EOF) {
	int f;

	int s;
	int count=0;

	while(n>=10){
		f=1;
	while(n>0){
		s=n%10;
		f=f*s;
		n=n/10;		
		} 
		n=f; 
		count++;
	}
	printf(" the persistence is %d\n", count);
    printf("Enter a positive number (or press CTRL+D to end) :");
}
printf(" END!");
return 0;
}
