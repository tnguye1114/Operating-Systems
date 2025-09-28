#include <stdio.h>
#include <stdlib.h>

int main() {
    int stack_var = 10;               // stored on stack
    int *heap_var = malloc(sizeof(int)); // allocated on heap
    *heap_var = 20;

    printf("Stack var: %d\n", stack_var);
    printf("Heap var: %d\n", *heap_var);

    free(heap_var);  // free heap memory
    return 0;
}
