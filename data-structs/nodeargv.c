#include <stdio.h>
#include <stdlib.h>

// void insert()

typedef struct node
{
    int value;
    struct node *next;
} node;


int main(int argc, char *argv[])
{

    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        printf("Iteration %i:\n", i);
        node *n = malloc(sizeof(node));
        n->value = atoi(argv[i]);
        // n->next = NULL;

        n->next = list;
        printf("%p\n", (void *)list);
        list = n;
    }
    
    // print list
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->value);
        ptr = ptr->next;
    }

    // free nodes
    ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}