#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int count_nodes(struct Node *head) {

    int count = 0;

    while (head != NULL) {
        count++;
        head = head->next;
    }

    return count;
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

    printf("Number of nodes = %d\n", count_nodes(head));

    free(third);
    free(second);
    free(head);

    return 0;
}