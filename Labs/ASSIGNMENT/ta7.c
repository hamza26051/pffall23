/*
	Name: HAMZA Sheikh
	Date: 30/10/2023
	Description: to display the shirts according to the ages and prices
*/
#include <stdio.h>

int main() {
    int age[5] = {25, 19, 40, 32, 57};
    int price[5] = {2000, 1300, 2058, 3500, 5300};

    printf("Original shirt details:\n");
    printf("            Age   Price\n");
    for (int i = 0; i < 5; i++) {
        printf("Shirt NO.%d  %d    %d\n", i + 1, age[i], price[i]);
    }

    
    int sage, sprice;
    for (int i=0; i<4; i++) {
        for (int j=0; j<4 -i; j++) {
            if (age[j] > age[j+1]) {
                
                sage = age[j];
                age[j] = age[j+1];
                age[j+1] = sage;

                
                sprice = price[j];
                price[j] = price[j+1];
                price[j+1] = sprice;
            }
        }
    }

    printf("Shirt details sorted by age in ascending order:\n");
    printf("            Age   Price\n");
    for (int i=0; i<5; i++) {
        printf("Shirt NO.%d  %d    %d\n", i+1, age[i], price[i]);
    }

    
    for (int i=0; i<4; i++) {
        for (int j=0; j<4 - i; j++) {
            if (price[j] < price[j + 1]) {
               
                sprice = price[j];
                price[j] = price[j+1];
                price[j+1] = sprice;

                
                sage = age[j];
                age[j] = age[j + 1];
                age[j + 1] = sage;
            }
        }
    }

    printf("Shirt details sorted by price in descending order:\n");
    printf("            Age   Price\n");
    for (int i = 0; i < 5; i++) {
        printf("Shirt NO.%d  %d    %d\n", i+1,age[i],price[i]);
    }

    return 0;
}
