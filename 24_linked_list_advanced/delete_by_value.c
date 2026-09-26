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
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *current;
    struct Node *temp;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    int value = 20;

    if (head != NULL && head->data == value) {

        temp = head;
        head = head->next;
        free(temp);

    } else {

        current = head;

        while (current != NULL && current->next != NULL) {

            if (current->next->data == value) {

                temp = current->next;
                current->next = temp->next;
                free(temp);

                break;
            }

            current = current->next;
        }
    }

    print_list(head);

    free(third);
    free(second);
    free(head);

    return 0;
}
