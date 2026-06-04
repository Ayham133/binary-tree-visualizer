/**
 * @file binary_tree.c
 * @brief All the implementation code for @file include/binary_tree.h
 */

#include "../include/binary_tree.h"
#include "../include/node.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>


/**
 * @brief Creat new tree with head_data as tree->head->data.
 * 
 * @param[in] head_data        The value to store in tree's head node.
 * @return Binary_tree *        Return Binary_tree struct, NULL if malloc failed.
 */
Binary_tree *init_tree(int head_data)
{
    Binary_tree *tree = malloc(sizeof *tree);

    if(tree == NULL)
        return NULL;

    tree->head = init_node(head_data);
    tree->height = 1;

    return tree;
}


/**
 * @brief return true if the tree doesn't have any nodes, false otherwise.
 * 
 * @param[in] tree      Targeted tree to check.
 * @return bool         True if the tree is empty, false otherwise.
 */
bool is_empty(Binary_tree *tree)
{
    return tree == NULL || tree->head == NULL;
}

/**
 * @brief Add to the targeted tree a new node according to binary tree rules. with data as it's node->data. 
 * 
 * @param[in] head      The head node of the tree.
 * @param[in] data      The values to store in the new node.
 * @return void
 */
void add(Node **head, int data)
{
    if(*head == NULL)
    { 
        *head = init_node(data);
        return;
    }
    else if(data < (*head)->data)
        add(&(*head)->left, data);
    else
        add(&(*head)->right, data);
}


/**
 * @brief Check if the tree containes the target value.
 * 
 * @param[in] head      The head node of the tree.
 * @param[in] traget    The value to check.
 * @return  bool        Return true if the tree containes the value, false otherwise. 
 */
bool containes(Node *head, int tartget)
{
    if(head == NULL)
        exit(EXIT_FAILURE);
    
    if(head->data == tartget)
        return true;
    else if(tartget < head->data)
        return containes(head->left, tartget);
    else 
        return containes(head->right, tartget);
}

/**
 * @brief Pre-order Traversal(Rot -> left -> right). Recursively visits the left subtree, recursively visits the right subtree, and processes the root last. 
 * 
 * @param[in] head The head node of the tree.
 * @return void
 */
void pre_order_traversal(Node *head)
{
    if(head == NULL)
        return;

    printf("%d ", head->data);
    pre_order_traversal(head->left);
    pre_order_traversal(head->right);

}