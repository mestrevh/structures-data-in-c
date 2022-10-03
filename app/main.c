#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"
#include "hello_world.h"

int main ()
{
    hello_world();

    bt *root = create_binary_tree();
    root = insert(root, 10);
    root = insert(root, 11);
    root = insert(root, 12);
    root = insert(root, 10);
    root = insert(root, 9);
    root = insert(root, 9);
    root = insert(root, 8);
    print_binary_tree(root);
    printf("\n");

    return 0;
}