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
    struct Node *new_node = NULL;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    new_node = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    new_node->data = 15;

    new_node->next = head->next;
    head->next = new_node;

    struct Node *current = head;

    printf("Linked List: ");

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");

    free(new_node);
    free(third);
    free(second);
    free(head);

    return 0;
}