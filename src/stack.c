#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct stack
{
    int elem;
    stack *next;
} stack;


int is_empty_stack (stack *s)
{
    return (int) (s == NULL);
}

stack *push(stack *s, int elem)
{
    stack *new_stack = (stack *) malloc(sizeof(stack));
    
    if (is_empty_stack(new_stack))
    {
        printf("\nFalta de memoria\n");
        exit(1);
    }
    
    new_stack->elem = elem;
    new_stack->next = s;

    return new_stack;
}

stack *pop(stack *s)
{
    if (is_empty_stack(s))
    {
        printf("\nPilha vaiza!\n");
    }
    else
    {
        stack *current = s;

        s = s->next;

        current->next = NULL;

        printf("Desempilhando: %d\n", current->elem);
        free(current);
    }

    return s;
}

void peek (stack *s)
{
    if (is_empty_stack(s))
    {
        printf("\nPilha vaiza!\n");
    }
    else
    {
        printf("\nTopo: %d\n", s->elem);
    }
}

void print_stack (stack *s)
{
    while (!is_empty_stack(s))
    {
        if (is_empty_stack(s->next))
        {
            printf("%d\n", s->elem);
        }
        else
        {
            printf("%d ", s->elem);
        }

        s = s->next;
    }
}