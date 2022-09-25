#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

typedef struct binary_tree 
{
    int elem;
    binary_tree *l;
    binary_tree *r;
} binary_tree;

