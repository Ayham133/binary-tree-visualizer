/**
 * @file main.c
 * @brief Ther start of the program and where main funtions is placed.
 */

#include "node.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    Node *node;
    node = init_node(10);

    node->left = init_node(5);

    printf("\t%d\n\t/\n\t\b%d\n", node->data, node->left->data);

    return EXIT_SUCCESS;
}

