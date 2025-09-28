#include <stdio.h>
#include "mathfuncs.h"

int main() {
    int a = 10, b = 4;

    printf("Add: %d + %d = %d\n", a, b, add(a, b));
    printf("Subtract: %d - %d = %d\n", a, b, subtract(a, b));

    return 0;
}
