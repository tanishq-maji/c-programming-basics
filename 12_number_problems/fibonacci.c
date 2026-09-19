#include <stdio.h>

int main() {

    int n;
    int first = 0;
    int second = 1;
    int next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (int i = 1; i <= n; i++) {

        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
