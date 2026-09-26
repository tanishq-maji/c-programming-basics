#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

struct Contact contacts[MAX_CONTACTS];
int count = 0;

void addContact() {
    if (count >= MAX_CONTACTS) {
        printf("Contact limit reached.\n");
        return;
    }

    printf("\nEnter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone Number: ");
    scanf(" %[^\n]", contacts[count].phone);

    printf("Enter Email: ");
    scanf(" %[^\n]", contacts[count].email);

    count++;

    printf("Contact added successfully.\n");
}

void displayContacts() {
    if (count == 0) {
        printf("\nNo contacts available.\n");
        return;
    }

    printf("\n--- Contact List ---\n");

    for (int i = 0; i < count; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", contacts[i].name);
        printf("Phone : %s\n", contacts[i].phone);
        printf("Email : %s\n", contacts[i].email);
    }
}

void searchContact() {
    char name[50];

    printf("\nEnter Name to search: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("\nContact Found!\n");
            printf("Name  : %s\n", contacts[i].name);
            printf("Phone : %s\n", contacts[i].phone);
            printf("Email : %s\n", contacts[i].email);
            return;
        }
    }

    printf("Contact not found.\n");
}

void deleteContact() {
    char name[50];

    printf("\nEnter Name to delete: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {

            for (int j = i; j < count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }

            count--;

            printf("Contact deleted successfully.\n");
            return;
        }
    }

    printf("Contact not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== CONTACT BOOK =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
                break;

            case 5:
                printf("Exiting Contact Book...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}
