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

    struct Node *previous = NULL;
    struct Node *current;
    struct Node *next;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    current = head;

    while (current != NULL) {

        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    head = previous;

    printf("Reversed Linked List: ");

    current = head;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");

    free(third);
    free(second);
    free(head);

    return 0;
}