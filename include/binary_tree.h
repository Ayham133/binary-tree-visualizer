/**
 * @file binary_tree.h
 * @brief Declare the Binary_tree struct and all the binary tree functions.
 */

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "node.h"
#include <stdlib.h>

typedef struct Binary_tree
{
    struct Node *head;
    int height;
}Binary_tree;

/**
 * @brief Creat new tree with head_data as tree->head->data.
 * 
 * @param[in] head              The root of the tree dirictely as a Node.
 * @return Binary_tree *        Return Binary_tree struct, NULL if malloc failed.
 */
Binary_tree *init_tree_node(Node *head);

/**
 * @brief Creat new tree with head_data as tree->head->data.
 * 
 * @param[in] head_data         The value to store in tree's head node.
 * @param[in] x                 Center of the ball/object on the x-axis
 * @param[in] y                 Center of the ball/object on the y-axis
 * @return Binary_tree *        Return Binary_tree struct, NULL if malloc failed.
 */
Binary_tree *init_tree(int head_data, float x, float y);


/**
 * @brief return true if the tree doesn't have any nodes, false otherwise.
 * 
 * @param[in] tree      Targeted tree to check.
 * @return bool         True if the tree is empty, false otherwise.
 */
bool is_empty(Binary_tree *tree);

/**
 * @brief Add to the targeted tree a new node according to binary tree rules. with data as it's node->data. 
 * 
 * @param[in] head          The head node of the tree.
 * @param[in] new_node      Pointer to added node.
 * @return Node *
 */
Node *addN(Node *head, Node *new_node);

/**
 * @brief Add to the targeted tree a new node according to binary tree rules. with data as it's node->data. 
 * 
 * @param[in] head      The head node of the tree.
 * @param[in] data      The values to store in the new node.
 * @return Node *
 */
Node *add(Node *head, int data, float x, float y);

/**
 * @brief Check if the tree containes the target value.
 * 
 * @param[in] head      The head node of the tree.
 * @param[in] traget    The value to check.
 * @param[in] x         Center of the ball/object on the x-axis
 * @param[in] y         Center of the ball/object on the y-axis
 * @return  bool        Return true if the tree containes the value, false otherwise. 
 */
bool containes(Node *head, int tartget);

/**
 * @brief Pre-order Traversal(Rot -> left -> right). Recursively visits the left subtree, recursively visits the right subtree, and processes the root last. 
 * 
 * @param[in] head The head node of the tree.
 * @return void
 */
void pre_order_traversal(Node *head);

/**
 * @brief Calculate the maximum width of this tree.
 * 
 * @param head      The head node(root) of this tree.
 * @return int      Retunr the maximum width of this tree.
 */
int get_max_width(Node *head);

#endif