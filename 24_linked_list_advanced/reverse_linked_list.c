#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *reverse_list(struct Node *head) {

    struct Node *previous = NULL;
    struct Node *current = head;
    struct Node *next;

    while (current != NULL) {

        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;
}

void print_list(struct Node *head) {

    printf("Linked List: ");

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

    printf("\n");
}

int main() {

    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Original ");
    print_list(head);

    head = reverse_list(head);

    printf("Reversed ");
    print_list(head);

    free(third);
    free(second);
    free(head);

    return 0;
}