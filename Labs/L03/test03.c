#include<stdio.h>
#include<math.h>

int main(){
  	int a;
	int b;
	printf("enter the length of perpendicular");
	scanf("%d", &a);
	printf("enter the length of base");
	scanf("%d", &b);
	float c= sqrt ((a*a)+(b*b));
	printf("the hypotenuse is %f",c);
	return 0;
}
