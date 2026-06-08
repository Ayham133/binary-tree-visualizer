/**
 * @file main.c
 * @brief Ther start of the program and where main funtions is placed.
 */

#include "../include/binary_tree.h"
#include "../include/node.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
   Binary_tree *tree = init_tree(10);
   add(&(tree->head), 15);
   add(&(tree->head), 11);
   add(&(tree->head), 5);
   add(&(tree->head), 1);

   pre_order_traversal((tree->head));
   printf("Tree width: %d", get_tree_width(tree->head));
   printf("\n");

    return EXIT_SUCCESS;
}

