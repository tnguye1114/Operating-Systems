#include <stdio.h>

struct Point {
    int x;
    int y;
};

void printPoint(struct Point *p) {
    printf("Point(%d, %d)\n", p->x, p->y);
}

int main() {
    struct Point pt = {10, 20};
    printPoint(&pt);
    return 0;
}
