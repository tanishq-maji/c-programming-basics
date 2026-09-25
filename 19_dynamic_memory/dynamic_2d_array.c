#include <stdio.h>
#include <stdlib.h>

int main() {

    int rows, columns;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int **matrix = malloc(rows * sizeof(int *));

    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {

        matrix[i] = malloc(columns * sizeof(int));

        if (matrix[i] == NULL) {
            printf("Memory allocation failed.\n");

            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }

            free(matrix);
            return 1;
        }
    }

    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}
