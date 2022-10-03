#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct binary_tree bt;

int is_empty(bt *root);
bt *create_binary_tree();
bt *insert(bt *root, int elem);
void print_binary_tree (bt *root);

#endif