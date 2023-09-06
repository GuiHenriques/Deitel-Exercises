#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int value;
    struct node *next;
} node;

node* start = NULL;
node* last = NULL;

void create(int);
void insert_start(int);
void insert_last(int);
void insert_position(int, int);
void insert_after(int, int);
void insert_before(int, int);

int access_first(void);
int access_last(void);
int access_position(int);
// access_value (variavel fantasma)

void remove_first(void);
void remove_last(void);
void remove_postion(int);
void remove_value(int);

// free_list();

void print_list(void);

int main(void)
{
    create(2);
    insert_start(1);
    insert_last(3);
    print_list();

    /*printf("%i\n", access_first());
    printf("%i\n", access_position(2));
    printf("%i\n", access_last());*/

    remove_postion(4);
    print_list();

    return 0;
}

// Create new list
void create(int val)
{
    node *n = malloc(sizeof(node));
    if (n == NULL)
        return;

    n->value = val;
    n->next = NULL;
    start = n;
    last = n;
}

// Insertions
void insert_start(int val)
{
    node *n = malloc(sizeof(node));
    if (n == NULL)
        return;

    n->value = val;
    n->next = NULL;

    n->next = start;
    start = n;
}

void insert_last(int val)
{
    node *n = malloc(sizeof(node));
    if (n == NULL)
        return;

    n->value = val;
    n->next = NULL;
    
    last->next = n;
    last = n;
}

void insert_position(int pos, int val)
{
    if (pos == 0)
    {
        insert_start(val);
        return;
    }

    node *n = malloc(sizeof(node));
    if (n == NULL)
        return;
    
    node *ptr = start;
    // start index: 1
    for (int i = 1; i < pos; i++)
    {
        ptr = ptr->next;
        // index error
        if (ptr == NULL)
            return;
    }

    n->value = val;
    n->next = ptr->next;
    ptr->next = n;
    
    if (ptr == last)
        last = n;
}

void insert_after(int pos, int val)
{
    node *ptr = start;
    while (ptr->value != pos)
    {
        ptr = ptr->next;
        // position not found
        if (ptr == NULL)
            return;
    }
    
    node *n = malloc(sizeof(node));
    if (n == NULL)
        return;

    n->value = val;
    n->next = ptr->next;
    ptr->next = n;

    if (n->next == NULL)
        last = n;
}

void insert_before(int pos, int val)
{
    node *ptr = start;
    if (ptr->value == pos)
    {
        insert_start(val);
        return;
    }

    while (ptr->next->value != pos)
    {
        ptr = ptr->next;
        if (ptr == NULL)
            return;
    }

    node *n = malloc(sizeof(node));
    if (n == NULL)
        return;

    n->value = val;
    n->next = ptr->next;
    ptr->next = n;
}

// Access
int access_first(void)
{
    return start->value;
}

int access_last(void)
{
    return last->value;
}

int access_position(int val)
{
    node *ptr = start;
    
    for (int i = 1; i < val; i++)
        ptr = ptr->next;
    
    return ptr->value;
}

// Remotions
void remove_first(void)
{
    node *tmp = start->next;
    free(start);
    start = tmp;
}

void remove_last(void)
{
    node *ptr = start;
    while (ptr->next != last)
        ptr = ptr->next;
    
    free(last);
    ptr->next = NULL;
    last = ptr;
}

void remove_postion(int pos)
{
    if (pos == 1) 
    {
        remove_first();
        return;
    }

    node *ptr = start;

    for (int i = 1; i < pos - 1; i++)
    {
        if (ptr->next == NULL)
        {
            printf("->next == null");
            return;
        }

        ptr = ptr->next;
    }
    
    if (ptr->next->next == NULL)
    {
        remove_last();
        return;
    }

    ptr->next = ptr->next->next;
    ptr = ptr->next;
    free(ptr);
    

    return;
}

void remove_value(int)
{

    return;
}


void print_list(void)
{
    node *ptr = start;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        printf("%i ", ptr->value);
        // free(ptr);
        ptr = next;
    }
    printf("\n");
}