/*
 * Creator: Hamza Sheikh
 *    Date: 3/12/23
 *    Desc: Display the performance of employees of different departments and figure out the best department on total score.
 */

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

struct Employee {
    char name[10];
    char role[10];
    float communication;
    float teamwork;
    float creativity;
};

void initializeName(char *name, char *usedNames[], int numUsedNames) {
    char *names[] = {"Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry", "Ivy", "Jack",
                     "Katie", "Leo", "Mia", "Noah", "Olivia", "Peter", "Quinn", "Rachel", "Sam", "Taylor"};

    int index;
    do {
        index = rand() % 20;
    } while (isNameUsed(names[index], usedNames, numUsedNames));

    strcpy(name, names[index]);
    usedNames[numUsedNames] = strdup(names[index]);
}

int isNameUsed(char *name, char *usedNames[], int numUsedNames) {
	int i;
    for ( i = 0; i < numUsedNames; i++) {
        if (strcmp(name, usedNames[i]) == 0) {
            return 1;  
        }
    }
    return 0;  
}

void initializeRoles(char *role, char *usedRoles[], int numUsedRoles) {
    char *roles[] = {"Director", "Executive", "Manager", "Employee", "Trainee"};

    int index;
    do {
        index = rand() % 5;
    } while (isRoleUsed(roles[index], usedRoles, numUsedRoles));

    strcpy(role, roles[index]);
    usedRoles[numUsedRoles] = strdup(roles[index]);
}

int isRoleUsed(char *role, char *usedRoles[], int numUsedRoles) {
	int i;
    for (i = 0; i < numUsedRoles; i++) {
        if (strcmp(role, usedRoles[i]) == 0) {
            return 1;  
        }
    }
    return 0;  
}

void initializeValues(float *communication, float *teamwork, float *creativity) {
    *communication = rand() % 101;
    *teamwork = rand() % 101;
    *creativity = rand() % 101;
}

int main() {
	
	printf("My name is Hamza Sheikh\n");
	
	
	
	
    float HR_score = 0;
    float Finance_score = 0;
    float Marketing_score = 0;
    float Logistics_score = 0;
    srand(time(NULL));
    int i, j;
    char best_department[10];
    float Highest_rating = 0;
    int numEmployees = 5;  
    struct Employee employees[numEmployees];

    char *departments[] = {"HR", "Finance", "Marketing", "Logistics"};

    for (j = 0; j < 4; j++) {
        printf(" %s\n", departments[j]);

        char *usedNames[numEmployees];
        char *usedRoles[numEmployees];

        for (i = 0; i < numEmployees; i++) {
            initializeName(employees[i].name, usedNames, i);
            initializeRoles(employees[i].role, usedRoles, i);
            initializeValues(&employees[i].communication, &employees[i].teamwork, &employees[i].creativity);

            printf("Name: %s | Role: %s | Communication: %.2f | Teamwork: %.2f | Creativity: %.2f\n",
                   employees[i].name, employees[i].role, employees[i].communication,
                   employees[i].teamwork, employees[i].creativity);

            if (j == 0) {
                HR_score += employees[i].communication + employees[i].teamwork + employees[i].creativity;
            } else if (j == 1) {
                Finance_score += employees[i].communication + employees[i].teamwork + employees[i].creativity;
            } else if (j == 2) {
                Marketing_score += employees[i].communication + employees[i].teamwork + employees[i].creativity;
            } else if (j == 3) {
                Logistics_score += employees[i].communication + employees[i].teamwork + employees[i].creativity;
            }
        }

        printf("\n\n");
    }
    printf("Total HR rating: %f \n", HR_score);
	printf("Total Finance rating: %f \n", Finance_score);
	printf("Total Marketing rating: %f\n", Marketing_score);
	printf("Total Logistic rating: %f \n", Logistics_score);
	
	
    if (HR_score > Highest_rating) {
        Highest_rating = HR_score;
        strcpy(best_department, "HR");
    }
    if (Finance_score > Highest_rating) {
        Highest_rating = Finance_score;
        strcpy(best_department, "Finance");
    }

    if (Marketing_score > Highest_rating) {
        Highest_rating = Marketing_score;
        strcpy(best_department, "Marketing");
    }

    if (Logistics_score > Highest_rating) {
        Highest_rating = Logistics_score;
        strcpy(best_department, "Logistics");
    }

    printf("The best Department with the score %.2f is %s\n", Highest_rating, best_department);
    

    return 0;
}

