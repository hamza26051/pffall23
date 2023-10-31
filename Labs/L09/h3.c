#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("Enter the size (N) for the arrays: ");
    scanf("%d", &N);

   
    srand(time(NULL));

   
    char charArray[N];
    int intArray[N];
    long long int longLongIntArray[N];

    for (int i = 0; i < N; i++) {
        charArray[i] = rand() % 128; 
        intArray[i] = rand() % 1000; 
        longLongIntArray[i] = ((long long int)rand() << 32) | rand();  
    }

   
    printf("Addresses and values in the char array:\n");
    for (int i = 0; i < N; i++) {
        printf("Address: %p, Value: %c\n", (void *)&charArray[i], charArray[i]);
    }

    printf("Addresses and values in the int array:\n");
    for (int i = 0; i < N; i++) {
        printf("Address: %p, Value: %d\n", (void *)&intArray[i], intArray[i]);
    }

    printf("Addresses and values in the long long int array:\n");
    for (int i = 0; i < N; i++) {
        printf("Address: %p, Value: %lld\n", (void *)&longLongIntArray[i], longLongIntArray[i]);
    }

    return 0;
}
