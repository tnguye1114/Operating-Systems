#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main(){
    FILE *file;
    char buffer[SIZE];
    char *array[SIZE];
    int length = 0;

    file = fopen("strings.txt", "r");

    if (file == NULL){
        perror("Error opening file");
        exit(1);
    }

    while((fgets(buffer, SIZE, file) != NULL)){
        buffer[strcspn(buffer, "\n")] = '\0';

        array[length] = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(array[length], buffer);
        length++;
    }

    for(int i = 0; i < length; i++){
        printf("[%d]: %s\n", i, array[i]);
    }

    fclose(file);

    for(int i = 0; i < length; i++){
        free(array[i]);
    }

    return 0;
}
