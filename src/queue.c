#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

typedef struct queue
{
    int elem;
    queue *next;
} queue;

int is_empty_queue(queue *q)
{
    return (int) (q == NULL);
}

queue *enqueue(queue *q, int elem)
{
    queue *new_queue = (queue *) malloc(sizeof(queue));

    if (is_empty_queue(new_queue))
    {
        printf("\nFalta de memoria!\n");
        exit(1);
    }

    new_queue->elem = elem;
    new_queue->next = NULL;

    if (is_empty_queue(q))
    {
        return new_queue;
    }
    else
    {
        queue *current = q;

        while (!is_empty_queue(current->next))
            current = current->next;
        
        current->next = new_queue;

        return q;
    }
    
}

queue *dequeue(queue *q)
{
    if (is_empty_queue(q))
    {
        printf("\nFila vazia\n");
        return q;
    }
    else
    {
        queue *dq = q;

        q = q->next;

        dq->next = NULL;

        printf("\nSaindo da fila: %d\n", dq->elem);

        free(dq);
        return q;
    }
}

void print_queue(queue *q)
{
    while (!is_empty_queue(q))
    {
        if (is_empty_queue(q->next))
        {
            printf("%d\n", q->elem);
        }
        else
        {
            printf("%d ", q->elem);
        }

        q = q->next;
    }
}