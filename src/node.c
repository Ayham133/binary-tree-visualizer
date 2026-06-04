/**
 * @file node.c
 * @brief Initialize and implement all the function in node.h
 */

#include "../include/node.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief Inittialize node.
 * 
 * @param[in] data      The value of the created node.
 * @return Node         return created Node, NULL if malloc failed.
 */
Node *init_node(int data)
{
    Node *node = malloc(sizeof *node);
    if(node == NULL)
        return NULL;

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

/**
 * @brief Check wether the node is a "leaf" node or not. The deffinetion of leaf node is the node which both node->right and node->left is NULL.
 * 
 * @param[in] node      Target node to check.
 * @return bool         True if the node is leaf node, false otherwise.
 */
bool is_leaf(Node *node)
{
    return (node != NULL && node->left == NULL && node->right == NULL);
}

