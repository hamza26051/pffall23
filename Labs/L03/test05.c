#include<stdio.h>

int main(){
	float a;
	float b;
	char ope;
	float res;
		printf("enter number 1");
		scanf("%f", & a);
		printf("%f", a);

		printf("enter number 2");
		scanf("%f", & b);
		printf("%f \n", b);

    		printf("enter an operator");
		scanf(" %c", & ope);
		printf("%c \n", ope);

  		switch (ope){
		case '+':
		res=a + b;
		break;
		case '-':
		res=a-b;
		break;
		case '*':
		res= a*b;
		break;
		default:
		printf("not a valid operator");
		return 0;
		}
		printf("%f",res);

		return 0;
}
