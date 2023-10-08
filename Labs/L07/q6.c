#include <stdio.h>

int main() {
    int ms = 21;
    int user_choice, comp_choice;

    while (ms > 0) {
        printf("Enter the number of matchsticks to pick (1-4): ");
        scanf("%d", &user_choice);

        if (user_choice >= 1 && user_choice <= 4 && user_choice <= ms) {
            ms -= user_choice;
            printf("Remaining matchsticks: %d\n", ms);

            
            comp_choice = (ms - 1) % 5;
            if (comp_choice <= 0) {
                comp_choice = 1;
            }

            ms -= comp_choice;
            printf("Computer picks %d matchstick(s).\n", comp_choice);
            printf("Remaining matchsticks: %d\n", ms);
        } else {
            printf("Invalid choice. Please choose 1, 2, 3, or 4 matchsticks.\n");
        }
    }

    printf("The computer is the winner!\n");

    return 0;
}

	
