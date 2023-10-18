/*  NAME: HAMZA SHEIKH
	DATE: 18/10/23
	DESCRIPTION: MATRICES MULTIPLICATION
*/


#include <stdio.h>

int main() {
    int a1,b1,c1,d1; 
    int a2,b2,c2,d2; 
    int result[2][2];   

    
    printf("Enter elements of matrix 1)");
    scanf("%d %d %d %d", &a1, &b1, &c1, &d1);

    
    printf("Enter elements of matrix 2 ");
    scanf("%d %d %d %d", &a2, &b2, &c2, &d2);

   
    result[0][0] = (a1 * a2 + b1 * c2);
    result[0][1] = (a1 * b2 + b1 * d2);
    result[1][0] = (c1 * a2 + d1 * c2);
    result[1][1] = (c1 * b2 + d1 * d2);

   
    printf("Resulting matrix C\n");
    printf("%d %d\n", result[0][0], result[0][1]);
    printf("%d %d\n", result[1][0], result[1][1]);

    return 0;
}
