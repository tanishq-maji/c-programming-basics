#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {

    struct Student student = {"Tanishq", 19, 85.5};

    struct Student *ptr = &student;

    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
