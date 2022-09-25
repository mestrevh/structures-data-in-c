#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

typedef struct binary_tree 
{
    int elem;
    binary_tree *l;
    binary_tree *r;
} binary_tree;

int is_empty(binary_tree *bt)
{
    return (int) (bt == NULL);
}

binary_tree *create_binary_tree()
{
    return NULL;
}

binary_tree *root_tree(int elem, binary_tree *bt)
{
    binary_tree *new_root = (binary_tree *) malloc(sizeof(binary_tree));

    if (is_empty(new_root))
    {
        printf("Erro: Falta de memória\n");
        exit(1);
    }

    new_root->elem = elem;
    new_root->l = NULL;
    new_root->r = NULL;

    return new_root;
}

void print_binary_tree (binary_tree *bt)
{
    if (is_empty(bt))
        return;

    printf("elem: %d\n", bt->elem);
}