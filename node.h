/**
 * @file node.h
 * @brief Declare Node struct and all it's fucntions.
 */
#ifndef NODE_H
#define NODE_H

#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *right;
    struct Node *left;
}Node;


/**
 * @brief Check whether the node is a "leaf" node or not. The deffinetion of leaf node is the node which both node->right and node->left is NULL.
 * 
 * @param[in] node      Target node to check.
 * @return bool         True if the node is leaf node, false otherwise.
 */
bool is_leaf(Node *node);

/**
 * @brief Inittialize node.
 * 
 * @param[in] data      The value of the created node.
 * @return Node         return created Node, NULL if malloc failed.
 */
Node *init_node(int data);

#endif