#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {

    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {

        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Sort students by marks in descending order
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (students[j].marks < students[j + 1].marks) {

                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\nStudents sorted by marks:\n");

    for (int i = 0; i < n; i++) {

        printf("%d. %s - %.2f marks\n",
               i + 1,
               students[i].name,
               students[i].marks);
    }

    return 0;
}
