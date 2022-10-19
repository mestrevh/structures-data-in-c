#ifndef TREE_H
#define TREE_H

typedef struct tree tree;
int is_empty_tree(tree *root);
tree *insert_tree(tree *root, char elem);
tree *rm_tree(tree *root, char elem);
void print_tree(tree *root);

#endif