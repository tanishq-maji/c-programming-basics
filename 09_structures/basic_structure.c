#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {

    struct Student student = {"Tanishq", 19, 85.5};

    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
