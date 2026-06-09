/**
 * @file main.c
 * @brief Ther start of the program and where main funtions is placed.
 */

#include "raylib.h"
#include "../include/binary_tree.h"
#include "../include/node.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{

    int window_width = 800;
    int window_height = 450;
    Node *root = init_node(10, window_height/2, 100);
   Binary_tree *tree = init_tree_node(root);

   Node *node = init_node(15, (window_width/2 - 100), window_height/2 - 100);
   Node *node2 = init_node(5, (window_width/2 - 100), window_height/2 - 100);
    tree->head = addN(tree->head, node);
    tree->head = addN(tree->head, node2);

   pre_order_traversal((tree->head));
   printf("\n");

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(window_width, window_height, "Binary Tree");

   while(!WindowShouldClose())
   {
       BeginDrawing();
       ClearBackground(RAYWHITE);

       // Drawing the root node of tree.
       DrawCircleLinesV(tree->head->center, 50.0f, BLACK);
       int text_width = MeasureText(TextFormat("%d", tree->head->data), 20);
       int text_x = (int)(tree->head->center.x - text_width / 2.0f);
       int text_y = (int)(tree->head->center.y - 20 / 2.0f);
       DrawText(TextFormat("%d", tree->head->data), text_x, text_y, 20, BLACK);

       EndDrawing();
   }

   CloseWindow();

    return EXIT_SUCCESS;
}

