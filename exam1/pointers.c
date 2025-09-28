#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;      // pointer to int
    int **pp = &p;    // pointer to pointer

    printf("Value via p: %d\n", *p);       // 5
    printf("Value via pp: %d\n", **pp);    // 5

    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("Pointer arithmetic: %d\n", *(ptr + 1)); // 20

    return 0;
}
