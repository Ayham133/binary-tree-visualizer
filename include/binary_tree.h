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
 * @param[in] head_data        The value to store in tree's head node.
 * @return Binary_tree *        Return Binary_tree struct, NULL if malloc failed.
 */
Binary_tree *init_tree(int head_data);


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
 * @param[in] head      The head node of the tree.
 * @param[in] data      The values to store in the new node.
 * @return void
 */
void add(Node **head, int data);

/**
 * @brief Check if the tree containes the target value.
 * 
 * @param[in] head      The head node of the tree.
 * @param[in] traget    The value to check.
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

#endif