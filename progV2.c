#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int loadArray(char buffer[], char *array[]);
void showArray(char *array[], int length);

int main(){
    char buffer[SIZE];
    char *array[SIZE];

    int length = loadArray(buffer, array);
    showArray(array, length);

    for(int i = 0; i < length; i++){
        free(array[i]);
    }

    return 0;
}

int loadArray(char buffer[], char *array[]){
    FILE *file;
    int length = 0;

    file = fopen("strings.txt", "r");

    if(file == NULL){
        perror("Error!!!");
        exit(1);
    }

    while((fgets(buffer, SIZE, file) != NULL)){
        buffer[strcspn(buffer, "\n")] = '\0';

        array[length] = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(array[length], buffer);
        length++;
    }

    fclose(file);

    return length;
}

void showArray(char *array[], int length){
    
    for (int i = 0; i < length; i++) {
        printf("[%d]: %s\n", i, array[i]);
    }
}