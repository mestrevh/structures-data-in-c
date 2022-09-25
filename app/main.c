#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"
#include "hello_world.h"

int main ()
{
    hello_world();

    binary_tree *bt = create_binary_tree();
    bt = root_tree(10, bt);

    if (!is_empty(bt))
        print_binary_tree(bt);

    return 0;
}