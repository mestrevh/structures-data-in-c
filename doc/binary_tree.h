#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct binary_tree binary_tree;

int is_empty(binary_tree *bt);
binary_tree *create_binary_tree();
binary_tree *root_tree(int elem, binary_tree *bt);
void print_binary_tree (binary_tree *bt);

#endif