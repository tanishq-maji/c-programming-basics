#include <stdio.h>

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    char name[50];
    int age;
    float marks;
    struct Address address;
};

int main() {

    struct Student student;

    printf("Enter student name: ");
    scanf("%49s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("Enter city: ");
    scanf("%49s", student.address.city);

    printf("Enter pincode: ");
    scanf("%d", &student.address.pincode);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);
    printf("City: %s\n", student.address.city);
    printf("Pincode: %d\n", student.address.pincode);

    return 0;
}
