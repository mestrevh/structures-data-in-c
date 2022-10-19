#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

typedef struct node
{
    char elem;
    int number_childs;
} node;

typedef struct tree
{
    node *root;
    node *childs;
};


int is_empty_tree (tree *root)
{
    return (int) (root == NULL);
}

tree *insert_tree(tree *root, char value)
{

}

void print_tree(tree *t)
{
    while (!is_empty_tree(tree))
    {
        printf("");
    }
}