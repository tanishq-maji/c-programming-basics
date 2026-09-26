#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

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
    struct Node *new_node;

    head = malloc(sizeof(struct Node));
    head->data = 20;
    head->next = NULL;

    new_node = malloc(sizeof(struct Node));
    new_node->data = 10;

    new_node->next = head;
    head = new_node;

    print_list(head);

    free(new_node);
    free(head);

    return 0;
}