/*
	Name: HAMZA Sheikh
	Date: 26/10/2023
	Description: to display the stats of batsmen
*/
#include <stdio.h>
int main(){
	int b;
	int i;
	int j=0;
	int k=0;
	printf(" Enter the number of batsmen: \n");
	scanf(" %d", &b);
	printf(" Enter the number of innings: \n");
	scanf(" %d", &i);
	int stats[b][i];
	for (; j < b; j++) {
    int total_runs = 0;
    int avg = 0;
    int max = 0;
    int century = 0;
    int fifty = 0;

    for (; k < i; k++) {
        printf("Enter the score: \n");
        scanf("%d", &stats[j][k]);
        total_runs = total_runs + stats[j][k];

        if (stats[j][k] >= 50) {
            if (stats[j][k] >= 100) {
                century++;
            } else {
                fifty++;
            }
        }
        if (stats[j][k] > max) {
            max = stats[j][k];
        }
    }

    avg = total_runs / i;  

    
    printf("Batsman %d:\n", j + 1);
    printf("Total runs: %d\n", total_runs);
    printf("Average: %d\n", avg);
    printf("Highest score: %d\n", max);
    printf("Number of centuries: %d\n", century);
    printf("Number of half centuries: %d\n", fifty);
    printf("\n");
}
return 0;
}
