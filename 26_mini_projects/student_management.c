#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

struct Student students[MAX_STUDENTS];
int count = 0;

void addStudent() {
    if (count >= MAX_STUDENTS) {
        printf("Student limit reached.\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &students[count].rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;

    printf("Student added successfully.\n");
}

void displayStudents() {
    if (count == 0) {
        printf("\nNo students available.\n");
        return;
    }

    printf("\n--- Student List ---\n");

    for (int i = 0; i < count; i++) {
        printf("Roll No: %d | Name: %s | Marks: %.2f\n",
               students[i].rollNo,
               students[i].name,
               students[i].marks);
    }
}

void searchStudent() {
    int rollNo;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &rollNo);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            printf("\nStudent Found!\n");
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }

    printf("Student not found.\n");
}

void saveToFile() {
    FILE *file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %.2f\n",
                students[i].rollNo,
                students[i].name,
                students[i].marks);
    }

    fclose(file);

    printf("Student data saved to file.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Save to File\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
       if (scanf("%d", &choice) != 1) {
    printf("Invalid input. Please enter a number.\n");

    while (getchar() != '\n') {
        // Clear invalid input
    }

    continue;
}


        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                saveToFile();
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}
