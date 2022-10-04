#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue queue;
int is_empty_queue(queue *q);
queue *enqueue(queue *q, int elem);
queue *dequeue(queue *q);
void print_queue(queue *q);

#endif