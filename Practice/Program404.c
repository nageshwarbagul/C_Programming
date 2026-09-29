#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    typedef struct node NODE;
    typedef struct node* PNODE;
    typedef struct node **PPNODE;

    PNODE head = NULL;
    
    return 0;
}