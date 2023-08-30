#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int value;
    struct node *next;
} node;

node* create(int);
node* insert(node* n, int);
bool find(node* n, int);


int main(void)
{
    node* list = create(3);
    list = insert(list, 6);
    list = insert(list, 9);
    printf("Find: %d\n", find(list, 7));
}

node* create(int val)
{
    node *n = malloc(sizeof(node));
    if (n == NULL)
        return NULL;

    n->value = val;
    n->next = NULL;

    return n;

}

node* insert(node *start, int val)
{
    node *n = malloc(sizeof(node));
    if (n == NULL)
        return NULL;

    n->value = val;
    n->next = NULL;

    n->next = start;
    start = n;
    return start;
}

bool find(node *start, int val)
{
    node *ptr = start;
    while (ptr != NULL)
    {
        printf("Valor: %i\n", ptr->value);
        if (ptr->value == val)
            return true;
        ptr = ptr->next;
    }
    
    return false;
}