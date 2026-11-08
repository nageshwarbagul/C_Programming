#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} NODE, *PNODE, **PPNODE;

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    printf("Size of node : %zu bytes\n", sizeof(NODE));

    return 0;
}