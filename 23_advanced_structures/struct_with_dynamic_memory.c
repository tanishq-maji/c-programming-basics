#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {

    struct Student *student;

    student = malloc(sizeof(struct Student));

    if (student == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter student name: ");
    scanf("%49s", student->name);

    printf("Enter age: ");
    scanf("%d", &student->age);

    printf("Enter marks: ");
    scanf("%f", &student->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Marks: %.2f\n", student->marks);

    free(student);

    return 0;
}
