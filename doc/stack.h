#ifndef STACK_H
#define STACK_H

typedef struct stack stack;
int is_empty_stack(stack *s);
stack *push(stack *s, int elem);
stack *pop(stack *s);
int peek(stack *s);

#endif