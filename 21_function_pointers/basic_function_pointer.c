#include <stdio.h>

void greet() {
    printf("Hello from function pointer!\n");
}

int main() {

    void (*function_ptr)();

    function_ptr = greet;

    function_ptr();

    return 0;
}
