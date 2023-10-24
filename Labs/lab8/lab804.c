/* 
NAME: HAMZA SHEIKH
DATE: 24/10/23
DESCRIPTION: verifying the password
*

#include <stdio.h>
#include <string.h>

int main() {
    char pass[50];
    char oripass[] = "hiworld123";

    printf("Enter your password: ");
    scanf("%s", pass);

    if (strlen(pass) < 8) {
        printf("Login failed. Password is too short.\n");
    } else {
        if (strcmp(pass, oripass) == 0) {
            printf("Login successful. Welcome!\n");
        } else {
            printf("Login failed. Incorrect password.\n");
        }
    }

    return 0;
}
