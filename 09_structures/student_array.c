#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {

    struct Student students[3];

    for (int i = 0; i < 3; i++) {

        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Details ---\n");

    for (int i = 0; i < 3; i++) {

        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
