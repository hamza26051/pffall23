#include <stdio.h>

struct Employee {
    char id[10];
    char name[20];
    double salary;
};

void combineFiles(FILE *file1, FILE *file2, FILE *file3) {
    if (file1 == NULL || file2 == NULL || file3 == NULL) {
        printf("Invalid file pointers!\n");
        return;
    }

    char line[100];

    rewind(file1);
    while (fgets(line, sizeof(line), file1) != NULL) {
        fputs(line, file3);
    }

    rewind(file2);
    while (fgets(line, sizeof(line), file2) != NULL) {
        fputs(line, file3);
    }

    printf("Data combined successfully!\n");
}

int main() {
    FILE *file1, *file2, *file3;
    int i;

    struct Employee employee[3];

    for (i=0; i< 3; i++) {
        printf("Enter the id for employee %d: ", i);
        scanf("%s", employee[i].id);

        printf("Enter the name for employee %d: ", i);
        scanf("%s", employee[i].name);

        printf("Enter the salary for employee %d: ", i);
        scanf("%lf", &employee[i].salary);
    }

    file1 = fopen("personal.txt", "w");
    if (file1== NULL) {
        printf("Error opening personal.txt \n");
        return 1;
    }

    fprintf(file1, "Employee id Employee name \n");

    for (i=0; i<3; i++) {
        fprintf(file1, "%s    %s\n", employee[i].id, employee[i].name);
    }

    fclose(file1);

    file2 = fopen("Department.txt","w");
    if (file2==NULL) {
        printf("Error opening department.txt \n");
        return 1;
    }

    fprintf(file2,"Employee id Employee salary \n");

    for (i=0; i<3; i++) {
        fprintf(file2, "%s 	  %.2lf\n", employee[i].id, employee[i].salary);
    }

    fclose(file2);

    file3 = fopen("combined.txt","w");
    if (file3 == NULL) {
        printf("Error opening combined.txt \n");
        return 1;
    }

    combineFiles(fopen("personal.txt","r"), fopen("Department.txt","r"), file3);

    fclose(file3);

    return 0;
}

