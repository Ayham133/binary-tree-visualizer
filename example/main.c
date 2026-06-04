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
   add(&(tree->head), 100);

    return EXIT_SUCCESS;
}

