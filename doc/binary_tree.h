#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct binary_tree bt;

int is_empty_binary_tree(bt *root);
bt *create_binary_tree();
bt *insert_binary_tree(bt *root, int elem);
bt *remove_binary_tree(bt *root, int elem);
void print_binary_tree (bt *root);
int search_binary_tree(bt *root, int elem);

#endif