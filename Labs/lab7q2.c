/*
Name: HAMZA SHEIKH
date: 10/10/2023
purpose: converting the array
*/


#include <stdio.h>

int main() {
    int d;
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the value of d: ");
    scanf("%d", &d);

    int array[n];
    for (int z = 0; z < n; z++) {
        printf("Enter the value of array[%d]", z);
        scanf("%d", &array[z]);
    }

    int sh[n];

    for (int i = 0; i < n; i++) {
        int ni = (i - d + n) % n; 
        sh[ni] = array[i];
    }

    printf("Shifted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sh[i]);
    }

    return 0;
}

