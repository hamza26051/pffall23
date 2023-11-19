#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char temp;
    char sentence[100];
    printf("Write a sentence: ");
    scanf("%99[^\n]", sentence);
    printf("%s\n", sentence);

    char *token = strtok(sentence, " ");
    while (token != NULL) {
        int length = strlen(token);
        int j = length - 1;
       
        for (i = 0; i < length / 2; i++) {
            temp = token[i];
            token[i] = token[j];
            token[j] = temp;
            j--;
        }

        printf("%s ", token);

        
        token = strtok(NULL, " ");
    }

    return 0;
}
