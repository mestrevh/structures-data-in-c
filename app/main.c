#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"
#include "hello_world.h"

int main ()
{
    hello_world();

    binary_tree *bt = create_binary_tree();
    bt = add_root(10, bt);

    if (!is_empty(bt))
    {
        print_binary_tree(bt);
    }

    //printf("elem: %d\n", bt->elem);

    return 0;
}