#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct node
{
    int elem;
    node *next;
} node;

int is_empty_list(node *l)
{
    return (int) (l == NULL);
}

node *add_node(node *l, int elem)
{
    node *head = l;

    node *new_node = (node *) malloc(sizeof(node));

    if (is_empty_list(new_node))
    {
        printf("\nFalta de memoria\n");
        exit(1);
    }

    new_node->elem = elem;

    if (!is_empty_list(l))
    {
        while (!is_empty_list(l->next))
        l = l->next;
    
        l->next = new_node;

       return head;
    }
    else
    {
        return new_node;
    }
    
}

node *rm_node(node *l, int elem)
{
    if (!is_empty_list(l))
    {
        
        node *current  = l;
        node *previous = NULL;

        while (!is_empty_list(current) && current->elem != elem)
        {
            previous = current;
            current = current->next;
        }
        
        if (is_empty_list(previous))
        {
            l = l->next;
            current->next = NULL;
            free(current);
        }
        else
        {
            if (is_empty_list(current))
            {
                printf("Item nao existe\n");
            }
            else
            {
                previous->next = current->next;
                current->next  = NULL;
                free(current);
            }
        }

    }

    return l;
}

int search_list(node *l, int elem)
{
    if (is_empty_list(l))
    {
        return 0;
    }
    else
    {
        while (!is_empty_list(l) && l->elem != elem)
            l = l->next;
        
        return !is_empty_list(l);
    }
}

void print_list(node *l)
{
    while (!is_empty_list(l))
    {
        if (is_empty_list(l->next))
        {
            printf("%d\n", l->elem);
        }
        else
        {
            printf("%d ", l->elem);
        }

        l = l->next;       
    }
}