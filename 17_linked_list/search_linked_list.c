#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *current;
    int key;
    int found = 0;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Enter element to search: ");
    scanf("%d", &key);

    current = head;

    while (current != NULL) {

        if (current->data == key) {
            found = 1;
            break;
        }

        current = current->next;
    }

    if (found) {
        printf("Element %d found in the linked list.\n", key);
    } else {
        printf("Element %d not found.\n", key);
    }

    free(third);
    free(second);
    free(head);

    return 0;
}