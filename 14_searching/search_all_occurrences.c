#include <stdio.h>

int main() {

    int n, key;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    printf("Element found at indices: ");

    for (int i = 0; i < n; i++) {

        if (arr[i] == key) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }

    printf("\n");

    return 0;
}
