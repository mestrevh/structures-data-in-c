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

stack *push (stack *s, int elem)
{
    stack *new_stack = (stack *) malloc(sizeof(stack));
    new_stack->elem = elem;
    new_stack->next = s;

    return new_stack;
}