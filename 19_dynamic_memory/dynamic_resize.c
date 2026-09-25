#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, new_size;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter new size: ");
    scanf("%d", &new_size);

    int *temp = realloc(arr, new_size * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed.\n");
        free(arr);
        return 1;
    }

    arr = temp;

    if (new_size > n) {

        printf("Enter %d additional elements:\n", new_size - n);

        for (int i = n; i < new_size; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("Resized array: ");

    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}