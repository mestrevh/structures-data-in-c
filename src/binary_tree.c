#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

typedef struct binary_tree 
{
    int elem;
    bt *l;
    bt *r;
} bt;

int is_empty_binary_tree(bt *root)
{
    return (int) (root == NULL);
}

bt *create_binary_tree()
{
    return NULL;
}

bt *insert_binary_tree(bt *root, int elem)
{
    if (is_empty_binary_tree(root))
    {
        bt *new_root = (bt *) malloc(sizeof(bt));

        if (is_empty_binary_tree(new_root))
        {
            printf("Erro: Falta de memória\n");
            exit(1);
        }

        new_root->elem = elem;

        return new_root;
    }

    if (elem >= root->elem)
    {
        root->r = insert_binary_tree(root->r, elem);
    }
    else
    {
        root->l = insert_binary_tree(root->l, elem);
    }

    return root;
}

void print_binary_tree (bt *root)
{
    if (is_empty_binary_tree(root))
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

int search_binary_tree (bt *root, int elem)
{
    if (is_empty_binary_tree(root))
        return 0;

    if (root->elem == elem)
        return 1;
    
    if (elem > root->elem)
    {
        return search_binary_tree(root->r, elem);
    }
    else
    {
        return search_binary_tree(root->l, elem);
    }
}