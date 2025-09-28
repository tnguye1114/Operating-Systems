#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main(){
    int x = 42;
    int *ptr = &x;
    int **dptr = &ptr;
    printf("%d", dptr); // = &ptr
    printf("%d", *dptr); // = &x
    printf("%d", **dptr); // = 42
    
    return 0;
}

int swap(int **a, int **b){
    int temp = **a;
    **a = **b;
    **b = temp;
    return 0;
}