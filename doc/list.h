#ifndef LIST_H
#define LIST_H

typedef struct node node;
int is_empty_list(node *l);
node *add_node(node *l, int elem);
node *rm_node(node *l, int elem);
int search_list(node *l, int elem);
void print_list(node *l);

#endif