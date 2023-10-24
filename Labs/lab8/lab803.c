/* 
NAME: HAMZA SHEIKH
DATE: 24/10/23
DESCRIPTION: counting the character
*/

#include <stdio.h>
#include <string.h>
int main(){
	char str[100]; // declaring a string
	char schar;
	printf(" enter a word ");
	fgets(str, sizeof(str), stdin);
	
	printf(" enter the chracter to be searched");
	scanf("%c", &schar);
	int i=0;
	int j=0;

	for (; str[i] !='\0'; i++){  //loop
		if (str[i] == schar){
			j++;
		}
	}
	printf(" occurences of %c in %d \n", schar, j);
	return 0;
}
