/**
 * @file main.c
 * @brief Ther start of the program and where main funtions is placed.
 */

#include "raylib.h"
#include "../include/binary_tree.h"
#include "../include/node.h"
#include "../include/window.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{

    int window_width = 800;
    int window_height = 450;
   Binary_tree *tree = init_tree(10, window_width/2, 100);

   Node *node = init_node(15, (window_width/2 - 100), window_height/2 - 100);
   Node *node2 = init_node(5, (window_width/2 - 100), window_height/2 - 100);
    tree->head = addN(tree->head, node);
    tree->head = addN(tree->head, node2);

   pre_order_traversal((tree->head));
   printf("\n");



//    while(!WindowShouldClose())
//    {
//        BeginDrawing();
//        ClearBackground(RAYWHITE);

//        EndDrawing();
//    }

//    CloseWindow();

    return EXIT_SUCCESS;
}

