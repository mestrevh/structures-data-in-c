#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

typedef struct binary_tree 
{
    int elem;
    bt *l;
    bt *r;
} bt;

int is_empty(bt *root)
{
    return (int) (root == NULL);
}

bt *create_binary_tree()
{
    return NULL;
}

bt *insert(bt *root, int elem)
{
    if (is_empty(root))
    {
        bt *new_root = (bt *) malloc(sizeof(bt));

        if (is_empty(new_root))
        {
            printf("Erro: Falta de memória\n");
            exit(1);
        }

        new_root->elem = elem;

        return new_root;
    }

    if (elem >= root->elem)
    {
        root->r = insert(root->r, elem);
    }
    else
    {
        root->l = insert(root->l, elem);
    }

    return root;
}

void print_binary_tree (bt *root)
{
    if (is_empty(root))
    {
        printf("()");
    }
    else
    {
        printf("(");
        print_binary_tree(root->l);
        printf(", %d ,", root->elem);
        print_binary_tree(root->r);
        printf(")");
    }
}