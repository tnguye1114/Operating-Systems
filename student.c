#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

void inputStudent(struct Student *s) {
    printf("Enter name: ");
    scanf(" %[^\n]", s->name);
    printf("Enter age: ");
    scanf("%d", &s->age);
    printf("Enter GPA: ");
    scanf("%f", &s->gpa);
}

void printStudent(struct Student s) {
    printf("Name: %s | Age: %d | GPA: %.2f\n", s.name, s.age, s.gpa);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number_of_students>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        printf("Please enter a valid number > 0.\n");
        return 1;
    }

    struct Student *students = malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        inputStudent(&students[i]);
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printStudent(students[i]);
    }

    free(students);
    return 0;
}
