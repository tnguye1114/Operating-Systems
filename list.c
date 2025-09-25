#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node *next;
};

typedef struct node Node;

int main(int argc, char *argv[]){
    Node node1;
    Node node2;
    Node node3;

    node1.value = 10;
    node1.next = &node2;

    node2.value = 20;
    node2.next = &node3;

    node3.value = 30;
    node3.next = NULL;

    showList(&node1);

    return 0;
}

void showList(Node *head){
    while(head != NULL){
        printf("----------------------------");
        printf("Node: %p\n", &head);
        printf("Value: %d\n", head->value);
        printf("Next: %p\n", head->next);
        head = head->next;
    }
}